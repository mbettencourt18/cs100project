#ifndef __PGPPG_HPP__
#define __PGPPG_HPP__

#include "PpgBase.hpp"

class PgPpg : public PpgBase{
	public:
		PgPpg() : PpgBase() {};
		double rate(Player* player){
			return 25 * player.GetPoints() / 27;
		}
};

#endif