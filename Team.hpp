#ifndef __TEAM_HPP__
#define __TEAM_HPP__

#include <string>

#include "Base.hpp"
#include "Player.hpp"

class Team:public Base {
    public:
        /* Constructors */
        Team() { };
	Team(string Name): TeamName(Name){};
        double rating(){
		double rating;
		for(int i = 0; i < 5; ++i){
			rating += list[i].GetRank();
		}
		return rating / 5;
	}
        string TeamName;
  	vector<Player*> roster;
	void Display(){
		for(int i = 0; i < 5; ++i){
			list[i]->Display();
		}
	}
	void AddPlayer(Player* player, int pos){
		list[pos-1] = player;
	}
	void RemovePlayer(int pos){
		list[pos-1] = nullptr;
	}
};

#endif

