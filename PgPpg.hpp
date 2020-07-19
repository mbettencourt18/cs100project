#ifndef __PGPPG_HPP__
#define __PGPPG_HPP__

#include "PpgBase.hpp"

class PgPpg : public PpgBase{
	public:
		PgPpg() : PpgBase() {};
		double rate(Player* x){
			return 25 * x->GetPoints() / 27;
		}
};

#endif
