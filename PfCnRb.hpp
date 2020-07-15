#ifndef __PFCNRB_HPP__
#define __PFCNRB_HPP__

#include "RbBase.hpp"

class PfCnReb : public RbBase{
	public:
	SfReb() : RbBase () {};
        double rate(Player* player){
                return 30 * player.GetReb() / 12;
        }


};

#endif


