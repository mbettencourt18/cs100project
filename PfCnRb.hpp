#ifndef __PFCNRB_HPP__
#define __PFCNRB_HPP__

#include "RbBase.hpp"

class PfCnReb : public RbBase{
	public:
	SfReb() : RbBase () {};
        double rate(vector<double> stats){
                return 30 * /* rebounds */ / 12;
        }


};

#endif


