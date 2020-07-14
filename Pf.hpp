#ifndef __PF_HPP__
#define __PF_HPP__

#include "Player.hpp"

class Pf : public Player{
        public:

        Pf(){}
       	Pf(Vector<Player*> AllPlayers)

        std::string FirstName();
        std::string LastName();
        double rating(); 


        AstBase* Assist;
        DefBase* Defense;
        PpgBase* Points;
        RebBase* Reboundss;
        FgpcntBase* FGPcnt;

};

#endif

