#ifndef __PGSGRB_HPP__
#define __PGSGRB_HPP__

#include "RbBase.hpp"

class PgSgReb : public RbBase{
	public:
	PgSgReb() : RbBase () {};
	double rate(Player* player){
		return 5 * player.GetReb() / 8;
	}
};

#endif


