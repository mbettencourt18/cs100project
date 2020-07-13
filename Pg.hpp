#ifndef __PG_HPP__
#define __PG_HPP__

#include "Player.hpp"

class Pg : public Player{
        public:

        pg(){}
        Pg(Vector<Player*> AllPlayers)

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
