#ifndef __PGSGDEF_HPP__
#define __PGSGDEF_HPP__

#include "DefBase.hpp"

class PgSgDef : public DefBase{
	PgSgDef() : DefBase() {};
	double rate(vector<double> stats){
		return 20 * ( /*steals*/ * 3 + /*blocks*/) / 6;

};

#endif


