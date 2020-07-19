#ifndef __PGSGDEF_HPP__
#define __PGSGDEF_HPP__

#include "DefBase.hpp"

class PgSgDef : public DefBase{
	public:
	PgSgDef() : DefBase() {};
	double rate(Player* x){
		return 20 * ( x->GetAssists() * 3 + x->GetAssists()) / 6;
	}

};

#endif


