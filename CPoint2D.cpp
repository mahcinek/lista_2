//
// Created by pivekk on 25.10.2016.
//

#include "CPoint2D.h"
#include <cmath>
#include <math.h>
#include <iostream>

CPoint2D::CPoint2D(double dX, double dY) {
    dXaxis=new double (dX);
    dYaxis=new double (dY);

}

CPoint2D::~CPoint2D() {
    delete dYaxis;
    delete dXaxis;
}

double CPoint2D::dCheckDistance(CPoint2D secound) {
    return (double) sqrt(pow(secound.dGetXaxis() - dGetXaxis(), 2) + pow(secound.dGetYaxis() - dGetYaxis(), 2));
}

CPoint2D::CPoint2D(CPoint2D &cPointother) {
    dXaxis= new double ( cPointother.dGetXaxis());
    dYaxis= new double ( cPointother.dGetYaxis());
}

CPoint2D CPoint2D::operator=(CPoint2D &cpointsec) {
    delete dXaxis;
    delete dYaxis;
    dXaxis=new double (cpointsec.dGetXaxis());
    dYaxis = new double (cpointsec.dGetYaxis());
}


