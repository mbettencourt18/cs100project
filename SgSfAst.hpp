#ifndef __SGSFAST_HPP__
#define __SGSFAST_HPP__

#include "AstBase.hpp"

class SgSfAst : public AstBase{
	public:
	SgSfAst() : AstBase () {};
        double rate(vector <double> stats){
                return 20 * /* assists */ / 10.6;
        }

};

#endif

