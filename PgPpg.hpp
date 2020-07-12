#ifndef __PGPPG_HPP__
#define __PGPPG_HPP__

#include "PpgBase.hpp"

class PgPpg : public PpgBase{
	public:
		PgPpg() : PpgBase() {};
		double rate(vector<double> stats){
			return 25 * /* ppg */ / 27;
		}
};

#endif
