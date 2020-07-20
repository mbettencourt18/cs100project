#ifndef __TEAM_HPP__
#define __TEAM_HPP__

#include <string>

#include "Base.hpp"
#include "Player.hpp"

class Team:public Base {
    public:
        /* Constructors */
        Team() { };
	Team(string Name): TeamName(Name);
        double rating(){
		double rating;
		for(int i = 0; i < 5; ++i){
			rating += list[i].rate();
		}
		return rating / 5;
	}
        string TeamName;
  	Player* list[5];
	void Display(){
		for(int i = 0; i < 5; ++i){
			list[i].print();
		}
	}
	void AddPlayer(Player* player, int pos){
		list[pos] = player;
	}
	void RemovePlayer(int pos){
		list[pos] = nullptr;
	}
};

#endif

