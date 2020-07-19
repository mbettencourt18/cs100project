#ifndef __PGSGSFFGPCNT_HPP__
#define __PGSGSFFGPCNT_HPP__

#include "FgPcntBase.hpp"

class PgSgSfFgPcnt : public FgPcntBase{
	public:
		PgSgSfFgPcnt() : FgPcntBase() {};
		double rate (Player* x){
			return 20 * x->GetFGPercent() / 48;
		}

};

#endif

