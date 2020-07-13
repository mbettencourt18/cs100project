#ifndef __PGSGSFFGPCNT_HPP__
#define __PGSGSFFGPCNT_HPP__

#include "FgPcntBase.hpp"

class PgSgSfFgPcnt : public FgPcntBase{
	public:
		PgSgSfFgPcnt() : FgPcntBase() {};
		double rate (vector<double> stats){
			return 20 * /* fg percent */ / 48;
		}

};

#endif

