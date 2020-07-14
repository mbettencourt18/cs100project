#ifndef __SFPFPPG_HPP__
#define __SFPFPG_HPP__

#include "PpgBase.hpp"

class SfPfPpg : public PpgBase{
        public:
                SfPfPpg() : PpgBase() {};
                double rate(Player* player){
                        return 20 * player.GetPoints() / 26;
                }
};

#endif

