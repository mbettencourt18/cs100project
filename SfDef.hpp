#ifndef __SFDEF_HPP__
#define __SFDEF_HPP__

#include "DefBase.hpp"

class SfDef : public DefBase{
	public:
        SfDef() : DefBase() {};
        double rate(vector<double> stats){
                return 20 * ( /*steals*/ + /*blocks*/) / 2.5;
	}
};

#endif

