#ifndef __ASTBASE_HPP__
#define __ASTBASE_HPP__

using namespace std;

class AstBase {
	public:
		AstBase(){};
		virtual double rate(Player* );
}

#endif
