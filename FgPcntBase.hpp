#ifndef __FGPCNTBASE_HPP__
#define __FGPCNTBASE_HPP__
#include "Player.hpp"

class Player;

class FgPcntBase {
	public:
	FgPcntBase() {};
	virtual double rate(Player* );
};

#endif
