#ifndef __PGSGRB_HPP__
#define __PGSGRB_HPP__

#include "RbBase.hpp"

class PgSgReb : public RbBase{
	public:
	PgSgReb() : RbBase () {};
	double rate(vector<double> stats){
		return 5 * /* rebounds */ / 8;
	}
};

#endif


