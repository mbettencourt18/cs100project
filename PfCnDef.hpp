#ifndef __PFCNDEF_HPP__
#define __PFCNDEF_HPP__

#include "DefBase.hpp"

class PfCnDef : public DefBase{
	public:
        PfCnDef() : DefBase() {};
        double rate(Player*x){
                return 20 * ( x->GetSteals() + (x->GetBlocks() * 2)) / 5;
        }

};

#endif
