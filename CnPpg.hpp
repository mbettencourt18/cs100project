#ifndef __CNPPG_HPP__
#define __CNPPG_HPP__

#include "PpgBase.hpp"

class CnPpg : public PpgBase{
        public:
                CnPpg() : PpgBase() {};
                double rate(vector<double> stats){
                        return 20 * /* ppg */ / 20;
                }
};

#endif

