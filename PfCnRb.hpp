#ifndef __PFCNRB_HPP__
#define __PFCNRB_HPP__

#include "RbBase.hpp"

class PfCnReb : public RbBase{
	public:
	SfReb() : RbBase () {};
        double rate(Player* x){
                return 30 * x->GetReb() / 12;
        }


};

#endif


