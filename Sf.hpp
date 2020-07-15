#ifndef __SF_HPP__
#define __SF_HPP__

#include "Player.hpp"

class Sf : public Player{
        public:

        Sf(){}
        Sf(Vector<Player*> AllPlayers)

        std::string FirstName();
        std::string LastName();
        double rating(Player* );


        AstBase* Assist;
        DefBase* Defense;
        PpgBase* Points;
        RebBase* Reboundss;
        FgpcntBase* FGPcnt;

};

#endif

