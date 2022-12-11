//
// Created by Heni on 12/10/2022.
//

#ifndef CPP_2022_GRADUATIONSERVICEIMPL_H
#define CPP_2022_GRADUATIONSERVICEIMPL_H
#include "Student.h"
#include "GraduationService.h"
#include "GraduationDao.h"

class GraduationServiceImpl: public GraduationService{
private:
    GraduationDao *dao;
public:
    Student findById(int id)  const override;
    double getResultByIdAndSubject(int id, const string& subject) const override;

    explicit GraduationServiceImpl(GraduationDao *dao);
};

#endif //CPP_2022_GRADUATIONSERVICEIMPL_H
