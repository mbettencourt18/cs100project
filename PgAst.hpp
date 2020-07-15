#ifndef __PGASSIST_HPP__
#define __PGASSIST_HPP__

#include "AstBase.hpp"

class PgAst : public AstBase{
	public:
	PgAst() : AstBase () {};
	double rate(Player* player){
		return 30 * player.GetAssists() / 10.6;
	}
};

#endif

