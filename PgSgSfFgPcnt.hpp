#ifndef __PGSGSFFGPCNT_HPP__
#define __PGSGSFFGPCNT_HPP__

#include "FgPcntBase.hpp"

class PgSgSfFgPcnt : public FgPcntBase{
	public:
		PgSgSfFgPcnt() : FgPcntBase() {};
		double rate (Player* player){
			return 20 * player.GetFGPercent() / 48;
		}

};

#endif

