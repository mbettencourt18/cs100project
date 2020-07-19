#ifndef __CNPPG_HPP__
#define __CNPPG_HPP__

#include "PpgBase.hpp"

class CnPpg : public PpgBase{
        public:
                CnPpg() : PpgBase() {};
                double rate(Player* x){
                        return 20 * x->GetPoints() / 20;
                }
};

#endif

