#ifndef __CR_HPP__
#define __CR_HPP__

#include "Player.hpp"

class Cr : public Player{
	public: 
	
	Cr(){}
	Cr(Vector<string> AllPlayers)

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

