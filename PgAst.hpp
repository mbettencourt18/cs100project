#ifndef __PGASSIST_HPP__
#define __PGASSIST_HPP__

#include "AstBase.hpp"

class PgAst : public AstBase{
	public:
	PgAst() : AstBase () {};
	double rate(Player* x){
		return 30 * x->GetAssists() / 10.6;
	}
};

#endif

