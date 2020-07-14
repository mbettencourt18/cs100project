#ifndef __PLAYER_HPP__
#define __PLAYER_HPP__

#include <string>

class Player {
    private:
    vector<Player*> list;
    int rank;
    string name;
    string team;
     double rebounds;
    double points;
    double assists;
    double steals;
    double blocks;
    double FGPercent;
    double FGA;
    double test;
    double threePA;
    double threeP;

        public:
	/* Constructors */
        Player() { };
        /* Pure Virtual Functions */
        virtual double rating(Player* ) = 0;
        virtual std::string FirstName() = 0;
	virtual std::string LastName() = 0;
	virtual double  GetAssists()= 0;
	virtual double GetReb()= 0;
	virtual double GetPoints()=0;
	virtual double GetSteals()=0;
	virtual double GetBlocks()=0;
	virtual double GetFGPercent()= 0;;
	virtual double GetFGA()=0;
	virtual double print();
	
};

#endif

