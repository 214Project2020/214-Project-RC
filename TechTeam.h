#ifndef TECHTEAM_H
#define TECHTEAM_H

#include <string>
#include <iostream>
#include "AnalysisTeam.h"

using namespace std;
class AnalysisTeam;

class TechTeam                  //observer
{	
    protected:
        AnalysisTeam* belongsTo;
    public:
        TechTeam();
        virtual ~TechTeam();
        void registerTeam(AnalysisTeam* subject);
        virtual void update() = 0;
};
#endif