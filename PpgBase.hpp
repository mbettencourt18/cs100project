#ifndef __PPGBASE_HPP__
#define __PPGBASE_HPP__
#include "Player.hpp"

class Player;


using namespace std;
class PpgBase {
	PpgBase() {};
	virtual double rate(Player* );
};

#endif
