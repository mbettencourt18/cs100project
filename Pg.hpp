#ifndef __PG_HPP__
#define __PG_HPP__

#include "Player.hpp"
#include <string>

using namespace std;

class Pg : public Player{
        public:

        Pg(){};
        Pg(int rank, string name, double rebounds, double points, double assists, double steals, double blocks, double FGPercent, double FGA, double threePA, double threeP){
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
	Assist = new PgAst();
	Defense = new PgSgDef();
	Points = new PgPpg();
	Rebounds = new PgSgRb();
	FGPcnt = new PgSgSfFgPcnt();			
}
	string GetPosition(){
		return "Pg";
	}
};

#endif
