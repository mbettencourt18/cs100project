#ifndef __SG_HPP__
#define __SG_HPP__

#include "Player.hpp"

class Sg : public Player{
        public:

        Sg(){}
        Sg(Vector<Player*> AllPlayers)

        std::string FirstName();
        std::string LastName();
        double rating(AstBase* , DefBase*, PpgBase*, RebBase*, FgpcntBase*      );


        AstBase* Assist;
        DefBase* Defense;
        PpgBase* Points;
        RebBase* Reboundss;
        FgpcntBase* FGPcnt;

};

#endif

