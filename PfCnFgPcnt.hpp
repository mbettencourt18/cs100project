#ifndef __PFCNFGPCNT_HPP__
#define __PFCNFGPCNT_HPP__

#include "FgPcntBase.hpp"

class PfCnFgPcnt : public FgPcntBase{
	 public:
                PgSgSfFgPcnt() : FgPcntBase() {};
                double rate (Player* x){
                        return 20 * x->GetFGPercent() / 58;
                }


};

#endif
