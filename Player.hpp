#ifndef __PLAYER_HPP__
#define __PLAYER_HPP__

#include <string>

using namespace std;

class Player{
	public:
		Player() { };
		string name;
		PpgBase* p;
		RbBase* r;
		DefBase* d;
		FgPcntBase* f;
		AstBase* a;
		vector<double> stats;
		virtual double Rate(PpgBase* , RbBase* , DefBase* , FgPcntBase*, vector<double>);
		double rating;
};

#endif
