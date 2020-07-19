#ifndef __PLAYER_HPP__
#define __PLAYER_HPP__

#include <string>
#include <iostream>
/*#include "AstBase.hpp"
#include "DefBase.hpp"
#include "FgPcntBase.hpp"
#include "PpgBase.hpp"
#include "RbBase.hpp"
#include "PgAst.hpp"
#include "SgSfAst.hpp"
#include "PfCnAst.hpp"
#include "PgSgDef.hpp"
#include "SfDef.hpp"
#include "PfCnDef.hpp"
#include "PgSgSfFgPcnt.hpp"
#include "PfCnFgPcnt.hpp"
#include "PgPpg.hpp"
#include "SgPpg.hpp"
#include "SfPfPpg.hpp"
#include "CnPpg.hpp"
#include "PgSgRb.hpp"
#include "SfRb.hpp"
#include "PfCnRb.hpp"

class RbBase;
class AstBase;
class DefBase; 
class FgPcntBase;
class PpgBase;
class PgAst;
class SgSfAst;
class PfCnAst;
class PgSgDef;
class SfDef;
class PfCnDef;
class PgSgSfFgPcnt;
class PfCnFgPcnt;
class PgPpg;
class SgPpg;
class SfPfPpg;
class CnPpg;
class PgSgRb;
class SfRb;
class PfCnRb;
*/
using namespace std;

class Player {
	public: 
	string name;
	double rebounds;
	double points, assists, steals, blocks, FGPercent, FGA, threePA, threeP, rank;
	AstBase* Assist;
        DefBase* Defense;
        FgPcntBase* FGPcnt;
        PpgBase* Points;
        RbBase* Rebounds;

        /* Constructors */
        //public:
	/* Constructors */
        Player() { };
        /* Pure Virtual Functions */
        double rating(Player* ){
		return Assists->rate(this) + Defense->rate(this) + FgPcnt->rate(this) + Points->rate(this) + Rebounds->rate(this);
	}
        string GetName(){return name;};
	double  GetAssists(){return assits;};
	double GetReb(){return rebounds;};
	double GetPoints(){return points;};
	double GetSteals(){return steals;};
	double GetBlocks(){return blocks;};
	double GetFGPercent(){return FGPercent;};
	double GetFGA(){return FGA;};
	double GetThreePA {return threePA;};
	double getThreeP{return threeP;};
	double print(){
		cout << name << " Rating: " << rank << " Assists: " << assists; 
/* finish print */
	} 
	
};

#endif

