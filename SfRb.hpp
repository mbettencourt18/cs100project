#ifndef __SFRB_HPP__
#define __SFRB_HPP__

#include "RbBase.hpp"

class SfReb : public RbBase{
	public:
	SfReb() : RbBase () {};
        double rate(vector<double> stats){
                return 20 * /* rebounds */ / 8;
        }


};

#endif


