#include <assert.h>
#include <iostream>
//simulation
#include "F1CarVirtual.h"
#include "CheckPointHandler.h"
#include "CheckPoint1.h"
#include "CheckPoint2.h"
#include "CheckPoint3.h"
#include "AnalysisTeam.h"
#include "MyTeam.h"
#include "TechTeam.h"
#include "TyreTeam.h"
#include "HeatTeam.h"
#include "FuelTeam.h"
#include "BrakesTeam.h"

//racing
#include "Iterator.h"
#include "LapIterator.h"
#include "Lap.h"
#include "Laps.h"
#include "Race.h"
#include "European.h"
#include "nonEuropean.h"
#include "racingStrategyContext.h"
#include "Tyres.h"
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <string>
//testing
#include "TeamTestingStation.h"
#include "NextSeasonCar.h"
#include "CurrentSeasonCar.h"
#include "WindTunnel.h"
#include "ComputerSimulation.h"
#include "Mechanic.h"
#include "CurrentSeasonWorkshop.h"
#include "NextSeasonWorkshop.h"
//--------------------------------------

int main()
{
//*************************************************start up and get option***********************************************
    bool input = false;
    bool terminate = false;
    int option = 0;
    cout<<"F1 2020"<<endl;
    cout<<"Lets get Going!"<<endl;
    while(input == false && terminate == false)
    {
        cout<<"1 : Race"<<endl;
        cout<<"2 : Testing"<<endl;
        cout<<"3 : Simulator"<<endl;
        cout<<"4 : Exit"<<endl;
        cin>>option;
        if(option > 4 || option < 1)                                    //check if input was correct
        {
            input = false;
        }
        else
        {
            input = true;
        }

        if (input == true)
        {
             //*********************************************option == 1 --> Racing***************************************************
            if (option == 1)
            {
                srand(time(0));

            //Intializing the tracks can be done using arrays when adding more tracks
            Track* test = new Track("Mugello", 66, true, "Italy");
            Track* test2 = new Track();

            test2->setTrackName("Circuit of Americas");
            test2->setNumLaps(33);
            test2->setIsEuro(false);
            test2->setCountry("Texas");

            //Initializing logistic objects

            European* euro = new European();
            nonEuropean* nonEuro = new nonEuropean();

            //testing if each track is european, needs to be refined when testing more tracks
            //After test is done, starts up logistics preparation functions
            if(test->getIsEuro()){
                euro->setTrack(test);
                euro->preperation();
            }
            else{
                nonEuro->setTrack(test);
                nonEuro->preperation();
            }

            /*
                Initializing the sessions.
                For each track there must be a session for that track to keep track of how many sets of tyres the cars will have
            */



            /*
                Initializing the sessions.
                For each track there must be a session for that track to keep track of how many sets of tyres the cars will have
            */
            Session* firstSession = new Session();
            //Inititializing the strategies
            //Each race needs a strategy
            racingStrategyContext* racingStrat = new racingStrategyContext(test, firstSession);
            racingStrat->chooseStrategy();
            Tyres* tyres = new Tyres(racingStrat->getStrategy(), 0, 2);


            //Work out intervals for changing tyres
            int totalTyres = tyres->getTotalRemainingTyres();
            int tyreChanges[totalTyres];
            int tyreInterval = 30/(totalTyres+1);
            int origionalInterval = tyreInterval;
            for (int i = 0; i < totalTyres; i++) {
                tyreChanges[i] = tyreInterval;
                tyreInterval += origionalInterval;
            }




            Lap* lap1 = new Lap();  //each lap is initialized with a random time it took to complete the lap

            Laps* container = new Laps(lap1);  //add the first lap into the Laps container
            int qualifyingPos = 0; //Qualifying position, updated in qualifier they are elliminated in

            cout << endl << "***************************************************************************" << endl;
            cout << "*                      STARTING PRACTICE                                  *" << endl;
            cout << "***************************************************************************" << endl << endl;
            lapIterator * it = container->createIterator();   //make a lapiterator
            for (int i = 0; i < 44; i++)
            {
                Lap* lapTester = new Lap();
                //lapTester->setLapNumber(i);
                container->addLap(lapTester);
            }

            int counter = 0;
            int lapNum = 0;
            int lapCounter = 1;
            while(!it->isDone()){  //while iterator hasnt reached the end of list
                if (lapCounter == tyreChanges[counter]) {
                    /*
                        Check if should change tyres on this laps
                    */
                    tyres->changeTyresAndDefault(0);
                    counter++;
                }
                srand(time(0));
                it->getCurrentLap()->showLapTime(lapCounter);
                it->addTime();

                /*
                    Check what the possibility of having a crash is on this lap.
                    Crash can either have a crash that will end their competition,
                    nearly have a crash and recover from it, or have a smooth lap.
                */
                it->getCurrentLap()->calculateCrashPossibility();
                lapCounter++;
                it->next(); //the ++ at the right of a for loop, to make it go to next item

            }
            /*
                Display total time and fastest lap time
                in minutes and seconds
            */

            it->displayTotalTime();
            it->displayFastestTime();

            /*
                Starting qualifiers - Determines their starting place in the final race
                In qualifier round 1 and round 2, the five slowest cars are eliminated and their starting position
                is cemented
            */

            cout << endl << "***************************************************************************" << endl;
            cout << "*                      STARTING QUALIFIER                                 *" << endl;
            cout << "*                            ROUND 1                                      *" << endl;
            cout << "***************************************************************************" << endl << endl;


            //Change tyres strategy to qualifying strategy

            Tyres* tyresQualifier1 = new Tyres(racingStrat->getStrategy(), 1, 2);
            //Work out intervals for changing tyres
            totalTyres = tyresQualifier1->getTotalRemainingTyres();
            int tyreChangesQ1[totalTyres];
            tyreInterval = 30/(totalTyres+1);
            origionalInterval = tyreInterval;
            for (int i = 0; i < totalTyres; i++) {
                tyreChangesQ1[i] = tyreInterval;
                tyreInterval += origionalInterval;
            }

            Lap* lapQ1 = new Lap();  //each lap is initialized with a random time it took to complete the lap
            //lapQ1->setLapNumber(0);

            Laps* containerQ1 = new Laps(lapQ1);  //add the first lap into the Laps container

            lapIterator * itQ1 = containerQ1->createIterator();   //make a lapiterator
            for (int i = 0; i < 11; i++)
            {
                Lap* lapTester = new Lap();
                containerQ1->addLap(lapTester);
            }


            counter = 0;
            lapCounter = 1;
            while(!itQ1->isDone()){  //while iterator hasnt reached the end of list
                if (lapCounter == tyreChanges[counter]) {      //Check if should change tyres
                    tyresQualifier1->changeTyresAndDefault(0);
                    counter++;
                }
                srand(time(0));
                //itQ1->getCurrentLap()->setLapNumber(minusingLaps);
                itQ1->getCurrentLap()->showLapTime(lapCounter);
                itQ1->addTime();
                itQ1->getCurrentLap()->calculateCrashPossibility();
                lapCounter++;
                itQ1->next(); //the ++ at the right of a for loop, to make it go to next item

            }

            itQ1->displayTotalTime();
            itQ1->displayFastestTime();

            /*
                Check if the cars fastest lap is high enough to qualify for Qualifier Round 2,
                times taken from thee 2020 F1
            */

            if (itQ1->getFastestTime() > 77.7)
            {
                /*
                    If their lap is not fast enough, display their qualifying position and
                    the car does not continue to participate in the rest of the qualifying rounds
                */
                srand(time(NULL));
                qualifyingPos = (rand() % 5) + 16;
                cout << "------------------------------------------------------------------" << endl;
                cout << "Your lap time was not fast enough and you have not qualified for round 2" << endl;
                cout << "Your qualifying position is: " << qualifyingPos << endl;
                cout << "------------------------------------------------------------------" << endl;

            }
            else {
                /*
                    Begin Qualifier Round 2
                */
                cout << endl << "***************************************************************************" << endl;
                cout << "*                      STARTING QUALIFIER                                 *" << endl;
                cout << "*                            ROUND 2                                      *" << endl;
                cout << "***************************************************************************" << endl << endl;

                Tyres* tyresQualifier2 = new Tyres(racingStrat->getStrategy(), 1, 2);
                //Work out intervals for changing tyres
                totalTyres = tyresQualifier2->getTotalRemainingTyres();
                int tyreChangesQ2[totalTyres];
                tyreInterval = 30/(totalTyres+1);
                origionalInterval = tyreInterval;
                for (int i = 0; i < totalTyres; i++) {
                    tyreChangesQ2[i] = tyreInterval;
                    tyreInterval += origionalInterval;
                }

                Lap* lapQ2 = new Lap();  //each lap is initialized with a random time it took to complete the lap
                //lapQ1->setLapNumber(0);

                Laps* containerQ2 = new Laps(lapQ2);  //add the first lap into the Laps container

                lapIterator * itQ2 = containerQ2->createIterator();   //make a lapiterator
                for (int i = 0; i < 11; i++)
                {
                    Lap* lapTester = new Lap();
                    containerQ2->addLap(lapTester);
                }


                counter = 0;
                lapCounter = 1;
                while(!itQ2->isDone()){  //while iterator hasnt reached the end of list
                    if (lapCounter == tyreChanges[counter]) {      //Check if should change tyres
                        tyresQualifier2->changeTyresAndDefault(0);
                        counter++;
                    }
                    srand(time(0));
                    //itQ1->getCurrentLap()->setLapNumber(minusingLaps);
                    itQ2->getCurrentLap()->showLapTime(lapCounter);
                    itQ2->addTime();
                    itQ2->getCurrentLap()->calculateCrashPossibility();
                    lapCounter++;
                    itQ2->next(); //the ++ at the right of a for loop, to make it go to next item

                }

                itQ2->displayTotalTime();
                itQ2->displayFastestTime();
                /*
                    Check if the cars fastest lap is high enough to qualify for Qualifier Round 3,
                    times taken from thee 2020 F1
                */
                if (itQ2->getFastestTime() > 75)
                {
                    /*
                        If their lap is not fast enough, display their qualifying position and
                        the car does not continue to participate in the rest of the qualifying rounds
                    */
                    srand(time(NULL));
                    qualifyingPos = (rand() % 5) + 11;
                    cout << "------------------------------------------------------------------" << endl;
                    cout << "Your lap time was not fast enough and you have not qualified for round 3" << endl;
                    cout << "Your qualifying position is: " << qualifyingPos << endl;
                    cout << "------------------------------------------------------------------" << endl;

                }
                else {
                    /*
                        Begin Qualifier Round 2
                    */
                    cout << endl << "***************************************************************************" << endl;
                    cout << "*                      STARTING QUALIFIER                                 *" << endl;
                    cout << "*                            ROUND 3                                      *" << endl;
                    cout << "***************************************************************************" << endl << endl;

                    Tyres* tyresQualifier3 = new Tyres(racingStrat->getStrategy(), 1, 2);
                    //Work out intervals for changing tyres
                    totalTyres = tyresQualifier3->getTotalRemainingTyres();
                    int tyreChangesQ3[totalTyres];
                    tyreInterval = 30/(totalTyres+1);
                    origionalInterval = tyreInterval;
                    for (int i = 0; i < totalTyres; i++) {
                        tyreChangesQ3[i] = tyreInterval;
                        tyreInterval += origionalInterval;
                    }

                    Lap* lapQ3 = new Lap();  //each lap is initialized with a random time it took to complete the lap
                    //lapQ1->setLapNumber(0);

                    Laps* containerQ3 = new Laps(lapQ3);  //add the first lap into the Laps container

                    lapIterator * itQ3 = containerQ3->createIterator();   //make a lapiterator
                    for (int i = 0; i < 11; i++)
                    {
                        Lap* lapTester = new Lap();
                        containerQ3->addLap(lapTester);
                    }


                    counter = 0;
                    lapCounter = 1;
                    while(!itQ3->isDone()){  //while iterator hasnt reached the end of list
                        if (lapCounter == tyreChanges[counter]) {      //Check if should change tyres
                            tyresQualifier3->changeTyresAndDefault(0);
                            counter++;
                        }
                        srand(time(0));
                        //itQ1->getCurrentLap()->setLapNumber(minusingLaps);
                        itQ3->getCurrentLap()->showLapTime(lapCounter);
                        itQ3->addTime();
                        itQ3->getCurrentLap()->calculateCrashPossibility();
                        lapCounter++;
                        itQ3->next(); //the ++ at the right of a for loop, to make it go to next item

                    }

                    itQ3->displayTotalTime();
                    itQ3->displayFastestTime();

                    /*
                        Display final starting position for final race
                    */
                    srand(time(NULL));
                    qualifyingPos = (rand() % 10) + 1;
                    cout << "------------------------------------------------------------------" << endl;
                    cout << "You have finished the final round of Qualifiers" << endl;
                    cout << "Your qualifying position is: " << qualifyingPos << endl;
                    cout << "------------------------------------------------------------------" << endl;
                }
            }


            cout << endl << "***************************************************************************" << endl;
            cout << "*                       STARTING FINAL RACE                               *" << endl;
            cout << "*                    STARTING POSITION : " << qualifyingPos << "                               *" << endl;
            cout << "***************************************************************************" << endl << endl;

            /*
                Change tyre strategy to final race.
            */
            Tyres* tyresFinal = new Tyres(racingStrat->getStrategy(), 2, 1);
            //Work out intervals for changing tyres
            totalTyres = tyresFinal->getTotalRemainingTyres();
            int tyreChangesFinal[totalTyres];
            tyreInterval = 30/(totalTyres+1);
            origionalInterval = tyreInterval;
            for (int i = 0; i < totalTyres; i++) {
                tyreChangesFinal[i] = tyreInterval;
                tyreInterval += origionalInterval;
            }

            Lap* lapFinal = new Lap();  //each lap is initialized with a random time it took to complete the lap
            //lapQ1->setLapNumber(0);

            Laps* containerFinal = new Laps(lapFinal);  //add the first lap into the Laps container

            lapIterator * itFinal = containerFinal->createIterator();   //make a lapiterator
            for (int i = 0; i < 77; i++)
            {
                Lap* lapTester = new Lap();
                containerFinal->addLap(lapTester);
            }


            counter = 0;
            lapCounter = 1;
            while(!itFinal->isDone()){  //while iterator hasnt reached the end of list
                if (lapCounter == tyreChanges[counter]) {      //Check if should change tyres
                    tyresFinal->changeTyresAndDefault(0);
                    counter++;
                }
                srand(time(0));
                //itQ1->getCurrentLap()->setLapNumber(minusingLaps);
                itFinal->getCurrentLap()->showLapTime(lapCounter);
                itFinal->addTime();
                itFinal->getCurrentLap()->calculateCrashPossibility();
                lapCounter++;
                itFinal->next(); //the ++ at the right of a for loop, to make it go to next item

            }

            itFinal->displayTotalTime();
            itFinal->displayFastestTime();

            int finalPosition = 0;

            /*
                Calculate final placing based on the total time of the race.
                This is done by dividing the positions into different categories based on total time.
            */

            if (itFinal->getTotalTime() > 7020) {
                srand(time(NULL));
                finalPosition = (rand() % 10) + 11;
            }
            else if (itFinal->getTotalTime() > 6995) {
                srand(time(NULL));
                finalPosition = (rand() % 5) + 6;
            }
            else {
                srand(time(NULL));
                finalPosition = (rand() % 5) + 1;
            }


            cout << endl << "***************************************************************************" << endl;
            cout << "*                           CONGRATULATIONS!                              *" << endl;
            cout << "*                     YOU HAVE FINISHED THE RACE                          *" << endl;
            cout << "***************************************************************************" << endl;
            cout << "                           Final placing: " << finalPosition << "                                " << endl;

            int pointsAdded = 0;

            /*
                If the final position is between 1-10, adds points added based on their position.
            */
            if (finalPosition < 11) {
                switch(finalPosition) {
                    case 1:
                        pointsAdded = 25;
                        break;
                    case 2:
                        pointsAdded = 18;
                        break;
                    case 3:
                        pointsAdded = 15;
                        break;
                    case 4:
                        pointsAdded = 12;
                        break;
                    case 5:
                        pointsAdded = 10;
                        break;
                    case 6:
                        pointsAdded = 8;
                        break;
                    case 7:
                        pointsAdded = 6;
                        break;
                    case 8:
                        pointsAdded = 4;
                        break;
                    case 9:
                        pointsAdded = 2;
                        break;
                    case 10:
                        pointsAdded = 1;
                        break;
                }
            }

            cout << "                           Points earned: " << pointsAdded << "                                 " << endl;

            }
            //*********************************************option == 2 --> Testing***************************************************
            if (option == 2)
            {
                cout<<"*****************************************************************************"<<endl;
                cout<<"*                           Testing F1Car!                                  *"<<endl;
                cout << "***************************************************************************" << endl;
                cout << endl;
                TeamTestingStation * ts = new TeamTestingStation();
                WindTunnel * wind = new WindTunnel(ts);
                ComputerSimulation * com = new ComputerSimulation(ts);

                ts->addType(wind);
                ts->addType(com);
                cout << endl;

                int in;
                

                while (in != 5){
                        cout << "Testing Options (1: Current Season Wind Tunnel, 2: Next Season Wind Tunnel, 3: Current Season Computer Simulation, 4: Next Season Wind Tunnel Simulation, 5: End Testing)" << endl;
                    cin >> in;
                    if (in == 1)
                        wind->runCurrentSeasonTest();
                    else if (in == 2)
                        wind->runNextSeasonTest();
                    else if (in == 3)
                        com->runCurrentSeasonTest();
                    else if (in == 4)
                        com->runNextSeasonTest();
                    else if (in == 5)
                        cout << "Invalid Entry" << endl;
                }


                /**
                 * @brief Builder Pattern
                 * 
                 */
                
                cout << endl;
                cout << "Building Car: " << endl;

                Mechanic * mech = new Mechanic();
                Builder * build = new CurrentSeasonWorkshop();
                Builder * nextBuild = new NextSeasonWorkshop();

                mech->setBuilder(build);
                mech->engineer("Mercedes", "V12", "Taper", "Pirelli");

                mech->setBuilder(nextBuild);
                mech->engineer("Mercedes 2.0", "V12 Turbo", "Taper", "Pirelli");

                cout << "Current Season Car Build:" << endl;

                CurrentSeasonCar::getInstance()->printCarDetails();

                cout << endl;

                cout << "Next Season Car Build:" << endl;

                NextSeasonCar::getInstance()->printCarDetails();


                in = 0;
                cout<<"*****************************************************************************" << endl;
                cout << "*                        Testing completed!                               *" << endl;
                cout << "***************************************************************************" << endl;
            }
            //*********************************************option == 3 --> Simulating***************************************************
            if (option == 3)                                            //Simulation
            {
                cout<<"*****************************************************************************" << endl;
                cout << "*                        Starting F1 Simulation!                          *" << endl;
                cout << "***************************************************************************" << endl;
                cout<<endl;
                //chain
                F1CarVirtual* myCar = new F1CarVirtual("speed machine");                  //create car
                CheckPointHandler* check1 = new CheckPoint1();
                CheckPointHandler* check2 = new CheckPoint2();
                CheckPointHandler* check3 = new CheckPoint3();
                check1->add(check2);
                check2->add(check3);
                
                //observer part
                TechTeam* tyres = new TyreTeam();
                TechTeam* heat = new HeatTeam();
                TechTeam* fuel = new FuelTeam();
                TechTeam* brakes = new BrakesTeam();
                AnalysisTeam* analysis = new AnalysisTeam(myCar);
                analysis->attach(tyres);                                            //add tyre team to observers
                analysis->attach(heat);
                analysis->attach(fuel);
                analysis->attach(brakes);

                check1->setTeam(analysis);                                          //set the team observing the simulation
                check2->setTeam(analysis);
                check3->setTeam(analysis);

                for(int ij=1 ; ij < 6 ; ij++)
                {
                    cout<<"Lap "<<ij<<" :"<<endl;
                    for(int ik=1 ; ik < 4 ; ik++)                               //run simulation
                    {
                        check1->handleRequest(myCar,ik,check1->getTime());                                //pass through chain
                    }
                    cout<<endl;
                }


                delete tyres;
                delete analysis;
                delete myCar;
                delete check1;
                delete check2;
                delete check3;
                cout<<"*****************************************************************************" << endl;
                cout << "*                        End of Simulation!                               *" << endl;
                cout << "***************************************************************************" << endl;
                cout<<endl;
            }
            if (option == 4)
            {
                terminate = true;
            }
            //*********************************************option == 4 --> Transport***************************************************
            input = false;
            if (terminate == false)
            {
                cout<<"*****************************************************************************" << endl;
                cout << "*                        Some time to breathe                              *" << endl;
                cout << "*                        and get things done!                              *" << endl;
                cout << "***************************************************************************" << endl;
                cout<<endl;
            }
        }
        
    }


    return 0;
}