#ifndef __PFCNAST_HPP__
#define __PFCNAST_HPP__

#include "AstBase.hpp"

class PfCnAst : public AstBase{
	public:
        PfCnAst() : AstBase () {};
        double rate(Player* player){
                return 10 * player.GetAssists() / 7;
        }

};

#endif


