#ifndef __PF_HPP__
#define __PF_HPP__

#include "Player.hpp"

class Pf : public Player{
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

