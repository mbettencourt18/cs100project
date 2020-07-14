#ifndef __SG_HPP__
#define __SG_HPP__

#include "Player.hpp"

class Sg : public Player{
        public:

        Sg(){}
        Sg(Vector<Player*> AllPlayers)

        std::string FirstName();
        std::string LastName();
        double rating(Player*);


        AstBase* Assist;
        DefBase* Defense;
        PpgBase* Points;
        RebBase* Reboundss;
        FgpcntBase* FGPcnt;

};

#endif

