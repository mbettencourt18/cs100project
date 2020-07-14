#ifndef __CNPPG_HPP__
#define __CNPPG_HPP__

#include "PpgBase.hpp"

class CnPpg : public PpgBase{
        public:
                CnPpg() : PpgBase() {};
                double rate(Player* player){
                        return 20 * player.GetPoints() / 20;
                }
};

#endif

