#ifndef __SGSFAST_HPP__
#define __SGSFAST_HPP__

#include "AstBase.hpp"

class SgSfAst : public AstBase{
	public:
	SgSfAst() : AstBase () {};
        double rate(Player* x){
                return 20 * x->GetAssists() / 10.6;
        }

};

#endif

