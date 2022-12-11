//
// Created by Heni on 12/11/2022.
//

#ifndef CPP_2022_SETTLEMENTSTATISTICIMPL_H
#define CPP_2022_SETTLEMENTSTATISTICIMPL_H

#include "Student.h"
#include "SettlementStatistics.h"
#include <vector>


class SettlementStatisticImpl : public SettlementStatistics {
private:
    multimap<string,Settlement> data;
public:
    SettlementStatisticImpl();

    virtual int numSettlements() const override;
    virtual int numCounties() const override;
    virtual int numSettlementsByCounty(const string& county) const override;
    virtual vector<Settlement> findSettlementsByCounty(const string& county) const override;
    virtual Settlement findSettlementsByNameAndCounty(const string& name, const string& county) const override;
    virtual Settlement maxPopulationDensity() const override;
    virtual Settlement minPopulationDensity() const override;
    virtual vector<Settlement> findSettlementsByName(const string& name) override;

    SettlementStatisticImpl(const string &fileName);
};


#endif //CPP_2022_SETTLEMENTSTATISTICIMPL_H
