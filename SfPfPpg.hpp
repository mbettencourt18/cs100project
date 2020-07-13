#ifndef __SFPFPPG_HPP__
#define __SFPFPG_HPP__

#include "PpgBase.hpp"

class SfPfPpg : public PpgBase{
        public:
                SfPfPpg() : PpgBase() {};
                double rate(vector<double> stats){
                        return 20 * /* ppg */ / 26;
                }
};

#endif

