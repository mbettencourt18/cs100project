#ifndef __PGASSIST_HPP__
#define __PGASSIST_HPP__

#include "AstBase.hpp"

class PgAst : public AstBase{
	public:
	PgAst() : AstBase () {};
	double rate(vector <double> stats){
		return 30 * /* assists */ / 10.6;
	}
};

#endif

