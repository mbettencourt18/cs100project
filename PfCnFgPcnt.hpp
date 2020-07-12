#ifndef __PFCNFGPCNT_HPP__
#define __PFCNFGPCNT_HPP__

#include "FgPcntBase.hpp"

class PfCnFgPcnt : public FgPcntBase{
	 public:
                PgSgSfFgPcnt() : FgPcntBase() {};
                double rate (vector<double> stats){
                        return 20 * /* fg percent */ / 58;
                }


};

#endif
