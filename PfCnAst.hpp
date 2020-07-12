#ifndef __PFCNASSIST_HPP__
#define __PFCNASSIST_HPP__

#include "AstBase.hpp"

class PfCnAst : public AstBase{

        PfCnAst() : AstBase () {};
        double rate(vector <double> stats){
                return 10 * /* assists */ / 10.6;
        }

};

#endif


