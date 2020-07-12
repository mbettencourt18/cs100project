#ifndef __SF_HPP__
#define __SF_HPP__

#include "Player.hpp"

class Sf : public Player{
        public:

        Cr(){}
        Cr(Vector<string> AllPlayers)

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

