#ifndef __PFCNAST_HPP__
#define __PFCNAST_HPP__

#include "AstBase.hpp"

class PfCnAst : public AstBase{
	public:
        PfCnAst() : AstBase () {};
        double rate(Player* x){
                return 10 * x->GetAssists() / 7;
        }

};

#endif


