#ifndef __SFRB_HPP__
#define __SFRB_HPP__

#include "RbBase.hpp"

class SfReb : public RbBase{
	SfReb() : RbBase () {};
        double rate(Player* x){
                return 20 * x->GetReb() / 8;
        }


};

#endif


