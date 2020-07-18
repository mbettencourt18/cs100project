#ifndef __PGSGDEF_HPP__
#define __PGSGDEF_HPP__

#include "DefBase.hpp"

class PgSgDef : public DefBase{
	public:
	PgSgDef() : DefBase() {};
	double rate(Player* player){
		return 20 * ( player.GetAssists() * 3 + player.GetAssists()) / 6;
	}

};

#endif


