#include "TechTeam.h"

TechTeam::TechTeam()
{

}
TechTeam::~TechTeam()
{

}
void TechTeam::registerTeam(AnalysisTeam* subject)
{
    this->belongsTo = subject;
}