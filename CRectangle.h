//
// Created by pivekk on 25.10.2016.
//

#ifndef LISTA_2_CTIANGLE_H
#define LISTA_2_CTIANGLE_H


#include "CPoint2D.h"


class CRectangle {
private:
     CPoint2D cpFirstPoint;
     CPoint2D cpSecoundPoint;
public:
    CRectangle(CPoint2D cpfirst, CPoint2D cpsecound) : cpFirstPoint(cpfirst),cpSecoundPoint(cpsecound)
    {
    }
    CRectangle (double dX1, double dY1, double dX2, double dY2);
    double  dCountField ();
    CPoint2D getcpFirstPoint (){return cpFirstPoint;}
    CPoint2D getcpSecoundPoint (){return cpSecoundPoint;}
    CRectangle ( CRectangle &cRectangleOther);
    ~CRectangle();
    CRectangle operator+(CRectangle &crectsec);
    CRectangle operator+ (CPoint2D &cpointsec);
    CRectangle operator= (CRectangle &crectsec);
};


#endif //LISTA_2_CTIANGLE_H
