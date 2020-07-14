#ifndef __PFCNDEF_HPP__
#define __PFCNDEF_HPP__

#include "DefBase.hpp"

class PfCnDef : public DefBase{
	public:
        PfCnDef() : DefBase() {};
        double rate(Player* player){
                return 20 * ( player.GetSteals() + (player.GetBlocks() * 2)) / 5;
        }

};

#endif
