#ifndef __PFCNAST_HPP__
#define __PFCNAST_HPP__

#include "AstBase.hpp"

class PfCnAst : public AstBase{
	public:
        PfCnAst() : AstBase () {};
        double rate(vector <double> stats){
                return 10 * /* assists */ / 7;
        }

};

#endif


