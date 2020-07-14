#ifndef __PLAYER_HPP__
#define __PLAYER_HPP__

#include <string>

class Player {

	private: 

	string player;
	double* rebounds;
	double* points,* assists,* steals,* blocks,* FGPercent,* FGA;
    public:
        /* Constructors */
        Player() { };

        /* Pure Virtual Functions */
        virtual double rating() = 0;
        virtual std::string FirstName() = 0;
	virtual std::string LastName() = 0;
	virtual double  GetAssists()= 0;
	virtual double GetReb()= 0;
	virtual double GetPoints()=0;
	virtual double GetSteals()=0;
	virtual double GetBlocks()=0;
	virtual double GetFGPercent()= 0;;
	virtual double GetFGA()=0;
	
};

#endif
