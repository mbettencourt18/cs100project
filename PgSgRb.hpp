#ifndef __PGSGRB_HPP__
#define __PGSGRB_HPP__

#include "RbBase.hpp"

class PgSgReb : public RbBase{
	public:
	PgSgReb() : RbBase () {};
	double rate(Player* x){
		return 5 * x->GetReb() / 8;
	}
};

#endif


