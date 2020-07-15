#ifndef __SFDEF_HPP__
#define __SFDEF_HPP__

#include "DefBase.hpp"

class SfDef : public DefBase{
	public:
        SfDef() : DefBase() {};
        double rate(Player* player){
                return 20 * ( player.GetSteals() + player.GetBlocks()) / 2.5;
	}
};

#endif

