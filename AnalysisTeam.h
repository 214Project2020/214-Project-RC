#ifndef ANALYSISTEAM_H
#define ANALYSISTEAM_H

#include <string>
#include <iostream>
#include <vector>
#include "TechTeam.h"
#include "MyTeam.h"

using namespace std;

class AnalysisTeam : public MyTeam                 //subject
{	
    private:
        vector<TechTeam*> crew;
    public:
        AnalysisTeam();
        AnalysisTeam(F1CarVirtual* car);
        ~AnalysisTeam();
        void attach(TechTeam* observer);
        void detach(TechTeam* observer);
        bool checkTyre();
        bool checkBrakes();
        bool checkHeat();
        bool checkFuel();

        void notify();
};
#endif