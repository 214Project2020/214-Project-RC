#include "racingStrategyState.h"
#include <iostream>
#include "Tyres.h"

using namespace std;

Tyres::Tyres(racingStrategyState* state, int type, int starting) {
        this->state = state;
        this->type = type;
        string raceType = "";
        switch(this->type) {
        case 0 :
            tyreVect = state->getSession()->getPractice();
            raceType = "Practice";
            break;
        case 1 :
            tyreVect = state->getSession()->getQuali();
            raceType = "Qualifier";
            break;
        case 2 :
            tyreVect = state->getSession()->getRace();
            raceType = "Final";
            break;
        }

        string startingTyre ="";
        switch(starting) {
        case 0 :
            startingTyre = "soft";
            break;
        case 1 :
            startingTyre = "medium";
            break;
        case 2 :
            startingTyre = "hard";
            break;
        }

        if (tyreVect[starting] > 0)
        {
            currentTyres = starting;
        }
        else
        {
            cout << "------------------------------------------------------------------------------" << endl;
            cout << "Cannot start with " <<  startingTyre << " tyres as there are none avaliable" << endl;
            if (tyreVect[0] > 0) {
                cout << "Instead soft tyres have been selected for you" << endl;
                starting = 0;
            }
            else if (tyreVect[1] > 0) {
                cout << "Instead medium tyres have been selected for you" << endl;
                starting = 1;
            }
            else if (tyreVect[2] > 0) {
                cout << "Instead hard tyres have been selected for you" << endl;
                starting = 2;
            }
            else {
                cout << "There are no tyres in the strategy that you have chosen" << endl;
            }

            cout << "------------------------------------------------------------------------------" << endl;
        }

        tyreVect[starting]--;




        startingTyre ="";
        switch(starting) {
        case 0 :
            startingTyre = "soft";
            break;
        case 1 :
            startingTyre = "medium";
            break;
        case 2 :
            startingTyre = "hard";
            break;
        }

        cout << "------------------------------------------------------------------------------" << endl;
        cout << raceType << " race has been started with " << startingTyre << " tyres" << endl;
        cout << "The current tyre strategy has the remaining tyres: " << endl;
        cout << "Soft tyres: " << tyreVect[0] << endl;
        cout << "Medium tyres: " << tyreVect[1] << endl;
        cout << "Hard tyres: " << tyreVect[2] << endl;
        cout << "------------------------------------------------------------------------------" << endl;
}

void Tyres::changeTyres(int tyreChange) {
    string tyreChanged ="";
    switch(tyreChange) {
    case 0 :
        tyreChanged = "soft";
        break;
    case 1 :
        tyreChanged = "medium";
        break;
    case 2 :
        tyreChanged = "hard";
        break;
    }
    cout << endl << "------------------------------------------------------------------------------" << endl;
    if (tyreVect[tyreChange] > 0)
    {
        currentTyres = tyreChange;
        tyreVect[tyreChange]--;
        cout << "Tyres have been changed to " << tyreChanged << " tyres" << endl;
    }
    else {
        cout << "Could not change tyres as there are no " << tyreChanged << " left" << endl;
        cout << "The following tyres are still avaliable: " << endl;
        cout << "Soft tyres: " << tyreVect[0] << endl;
        cout << "Medium tyres: " << tyreVect[1] << endl;
        cout << "Hard tyres: " << tyreVect[2] << endl;

    }
    cout << "------------------------------------------------------------------------------" << endl;
}

int Tyres::getTotalRemainingTyres() {
    int totalHolder = 0;
    for (int i = 0; i < 3; i++) {
        totalHolder +=  tyreVect[i];
    }
    return totalHolder;
}

void Tyres::changeTyresAndDefault(int tyreChange) {
    string tyreChanged ="";
    switch(tyreChange) {
    case 0 :
        tyreChanged = "soft";
        break;
    case 1 :
        tyreChanged = "medium";
        break;
    case 2 :
        tyreChanged = "hard";
        break;
    }
    cout << endl << "------------------------------------------------------------------------------" << endl;
    if (tyreVect[tyreChange] > 0)
    {
        currentTyres = tyreChange;
        tyreVect[tyreChange]--;
        cout << "Tyres have been changed to " << tyreChanged << " tyres" << endl;
    }
    else {
        cout << "Cannot change to " <<  tyreChanged << " tyres as there are none avaliable" << endl;
        if (tyreVect[0] > 0) {
            cout << "Instead soft tyres have been selected for you" << endl;
            currentTyres = 0;
            tyreVect[currentTyres]--;
        }
        else if (tyreVect[1] > 0) {
            cout << "Instead medium tyres have been selected for you" << endl;
            currentTyres = 1;
            tyreVect[currentTyres]--;
        }
        else if (tyreVect[2] > 0) {
            cout << "Instead hard tyres have been selected for you" << endl;
            currentTyres = 2;
            tyreVect[currentTyres]--;
        }
        else {
            cout << "There are no tyres in the strategy that you have chosen" << endl;
        }

    }
    cout << "------------------------------------------------------------------------------" << endl << endl;
}
