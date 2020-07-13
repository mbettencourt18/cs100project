#ifndef __SGPPG_HPP__
#define __SGPPG_HPP__

#include "PpgBase.hpp"

class SgPpg : public PpgBase{
        public:
                SgPpg() : PpgBase() {};
                double rate(vector<double> stats){
                        return 35 * /* ppg */ / 30;
                }
};

#endif

