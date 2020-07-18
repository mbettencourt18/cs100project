#ifndef __SF_HPP__
#define __SF_HPP__

#include "Player.hpp"

class Sf : public Player{
        public:

        Sf(){}
	Sf(int rank, string name, double rebounds, double points, double assists, double steals, double blocks, double FGPercent, double FGA, double threePA, double threeP){
        this->rank = rank;
        this->name = name;
        //this->team = team;
        this->rebounds = rebounds;
        this->points = points;
        this->assists = assists;
        this->steals = steals;
        this->blocks = blocks;
        this->FGPercent = FGPercent;
        this->FGA = FGA;
        this->threePA = threePA;
        this->threeP = threeP;
        Assist = new SgSfAst();
        Defense = new SfDef();
        Points = new SfPfPpg();
        Rebounds = new SfRb();
        FGPcnt = new PgSgSfFgPcnt();
}

};

#endif

