#ifndef __TEAM_HPP__
#define __TEAM_HPP__

#include <string>

class Team {
    public:
        /* Constructors */
        Team() { };
	Team(string Name): TeamName(Name);
        /* Pure Virtual Functions */
        virtual double rating() = 0;
        string TeamName = 0;
  
};

#endif

