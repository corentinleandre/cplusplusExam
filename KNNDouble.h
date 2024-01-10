//
// Created by coren on 10/01/2024.
//

#ifndef CPLUSPLUSEXAM_KNNDOUBLE_H
#define CPLUSPLUSEXAM_KNNDOUBLE_H

#include "KNN.h"

class KNNDouble : public KNN<pair<double,double>>{
    double similarityMeasure(std::pair<double, double> &, std::pair<double, double> &) override;
};

#endif //CPLUSPLUSEXAM_KNNDOUBLE_H
