#ifndef __SFRB_HPP__
#define __SFRB_HPP__

#include "RbBase.hpp"

class SfReb : public RbBase{
	SfReb() : RbBase () {};
        double rate(Player* player){
                return 20 * player.GetReb() / 8;
        }


};

#endif


