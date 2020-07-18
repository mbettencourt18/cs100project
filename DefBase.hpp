#ifndef __DEFBASE_HPP__
#define __DEFBASE_HPP__
#include "Player.hpp"

class Player;
using namespace std;

class DefBase {
	DefBase() {};
	virtual double rate(Player* );
};

#endif
