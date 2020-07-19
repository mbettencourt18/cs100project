#ifndef __SFDEF_HPP__
#define __SFDEF_HPP__

#include "DefBase.hpp"

class SfDef : public DefBase{
	public:
        SfDef() : DefBase() {};
        double rate(Player* x){
                return 20 * ( x->GetSteals() + x->GetBlocks()) / 2.5;
	}
};

#endif

