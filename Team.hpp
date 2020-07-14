#ifndef __TEAM_HPP__
#define __TEAM_HPP__

#include <string>

#include "Base.hpp"
#include "Player.hpp"

class Team {
    public:
        /* Constructors */
        Team() { };
	Team(string Name): TeamName(Name);
        double rating() = 0;
        string TeamName = 0;
  	Player list[5];
	void printTeam();
	void AddPlayer(string pos);
	void RemovePlayer(string pos);
};

#endif

