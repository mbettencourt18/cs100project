#ifndef __CN_HPP__
#define __CN_HPP__

#include "Player.hpp"

class Cn : public Player{
	public: 
	
	Cn(){}
	Cn(Vector<Player*> AllPlayers)

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

