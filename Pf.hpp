#ifndef __PF_HPP__
#define __PF_HPP__

#include "Player.hpp"

class Pf : public Player{
        public:

        Pf(){}
	Pf(int rank, string name, double rebounds, double points, double assists, double steals, double blocks, double FGPercent, double FGA, double threePA, double threeP){
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
        Assist = new PfCnAst();
        Defense = new PfCnDef();
        Points = new SfPfPpg();
        Rebounds = new PfCnRb();
        FGPcnt = new PfCnFgPcnt();
}

};

#endif

