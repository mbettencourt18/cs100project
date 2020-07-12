#ifndef __PFCNDEF_HPP__
#define __PFCNDEF_HPP__

#include "DefBase.hpp"

class PfCnDef : public DefBase{
        PfCnDef() : DefBase() {};
        double rate(vector<double> stats){
                return 20 * ( /*steals*/ + (/*blocks*/ * 2)) / 5;
        }

};

#endif
