#ifndef __SGPPG_HPP__
#define __SGPPG_HPP__

#include "PpgBase.hpp"

class SgPpg : public PpgBase{
        public:
                SgPpg() : PpgBase() {};
                double rate(Player* player){
                        return 35 * player.GetPoints() / 30;
                }
};

#endif
