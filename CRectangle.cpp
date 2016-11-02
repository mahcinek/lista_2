//
// Created by pivekk on 25.10.2016.
//

#include <iostream>
#include <math.h>
#include "CRectangle.h"

CRectangle::~CRectangle() {

}

CRectangle::CRectangle(double dX1, double dY1, double dX2, double dY2):cpSecoundPoint(dX2,dY2),cpFirstPoint(dX1,dY1) {
}

double CRectangle::dCountField() {
    double b= abs(cpFirstPoint.dGetXaxis()-cpSecoundPoint.dGetXaxis())*abs(cpFirstPoint.dGetYaxis()-cpSecoundPoint.dGetYaxis());
    return b;
}

CRectangle::CRectangle(const CRectangle &cRectangleOther):cpFirstPoint(cRectangleOther.getcpFirstPoint().dGetXaxis(),cRectangleOther.getcpFirstPoint().dGetYaxis()),cpSecoundPoint(cRectangleOther.getcpSecoundPoint().dGetXaxis(),cRectangleOther.getcpSecoundPoint().dGetYaxis()) {

}

CRectangle CRectangle::operator +(const CRectangle &crectsec) {

    double tintX [4];
    double tintY [4];
    tintX[0]=this->getcpFirstPoint().dGetXaxis();
    tintX[1]=this->getcpSecoundPoint().dGetXaxis();
    tintX[3]=crectsec.getcpFirstPoint().dGetXaxis();
    tintX[2]=crectsec.getcpSecoundPoint().dGetXaxis();
    tintY[0]=this->getcpFirstPoint().dGetYaxis();
    tintY[1]=this->getcpSecoundPoint().dGetYaxis();
    tintY[2]=crectsec.getcpFirstPoint().dGetYaxis();
    tintY[3]=crectsec.getcpSecoundPoint().dGetYaxis();
    double iXmax=tintX[0];
    double iXmin=tintX[0];
    double iYmax=tintY[0];
    double iYmin=tintY[0];
    for (int i=0;i<4;i++)
    {
        if (tintX[i]>iXmax) iXmax=tintX[i];
        if (tintX[i]<iXmin) iXmin=tintX[i];
        if (tintY[i]>iYmax) iYmax=tintY[i];
        if (tintY[i]<iYmin) iYmin=tintY[i];
    }

    this->cpFirstPoint.vSetXaxis(iXmin);
    this->cpSecoundPoint.vSetXaxis(iXmax);
    this->cpFirstPoint.vSetYaxis(iYmin);
    this->cpSecoundPoint.vSetYaxis(iYmax);

    /*if (this->getcpFirstPoint().dGetXaxis()<this->getcpSecoundPoint().dGetXaxis())
    {

        if (this->getcpFirstPoint().dGetXaxis()>crectsec.getcpFirstPoint().dGetXaxis())
            this->cpFirstPoint.vSetXaxis(crectsec.getcpFirstPoint().dGetXaxis());
        if (this->getcpFirstPoint().dGetXaxis()>crectsec.getcpSecoundPoint().dGetXaxis())
            this->cpFirstPoint.vSetXaxis(crectsec.getcpSecoundPoint().dGetXaxis());
        if (this->getcpSecoundPoint().dGetXaxis()<crectsec.getcpFirstPoint().dGetXaxis())
            this->cpSecoundPoint.vSetXaxis(crectsec.getcpFirstPoint().dGetXaxis());
        if (this->getcpSecoundPoint().dGetXaxis()<crectsec.getcpSecoundPoint().dGetXaxis())
            this->cpSecoundPoint.vSetXaxis(crectsec.getcpSecoundPoint().dGetXaxis());
    }
    else
    {
        if (this->getcpSecoundPoint().dGetXaxis()>crectsec.getcpFirstPoint().dGetXaxis())
            this->cpSecoundPoint.vSetXaxis(crectsec.getcpFirstPoint().dGetXaxis());
        if (this->getcpSecoundPoint().dGetXaxis()>crectsec.getcpSecoundPoint().dGetXaxis())
            this->cpSecoundPoint.vSetXaxis(crectsec.getcpSecoundPoint().dGetXaxis());
        if (this->getcpFirstPoint().dGetXaxis()<crectsec.getcpFirstPoint().dGetXaxis())
            this->getcpFirstPoint().vSetXaxis(crectsec.getcpFirstPoint().dGetXaxis());
        if (this->getcpFirstPoint().dGetXaxis()<crectsec.getcpSecoundPoint().dGetXaxis())
            this->getcpFirstPoint().vSetXaxis(crectsec.getcpSecoundPoint().dGetXaxis());
    }

    if (this->getcpFirstPoint().dGetYaxis()<this->getcpSecoundPoint().dGetYaxis())
    {
        if(this->getcpFirstPoint().dGetYaxis()>crectsec.getcpSecoundPoint().dGetYaxis())
            this->cpFirstPoint.vSetYaxis(crectsec.getcpSecoundPoint().dGetYaxis());
        if(this->getcpFirstPoint().dGetYaxis()>crectsec.getcpFirstPoint().dGetYaxis())
            this->cpFirstPoint.vSetYaxis(crectsec.getcpFirstPoint().dGetYaxis());
        if (this->getcpSecoundPoint().dGetYaxis()<crectsec.cpFirstPoint.dGetYaxis())
            this->getcpSecoundPoint().vSetYaxis(crectsec.cpFirstPoint.dGetYaxis());
        if (this->getcpSecoundPoint().dGetYaxis()<crectsec.getcpSecoundPoint().dGetYaxis())
            this->cpSecoundPoint.vSetYaxis(crectsec.getcpSecoundPoint().dGetYaxis());
    }

    else
    {
        if (this->getcpSecoundPoint().dGetYaxis()>crectsec.getcpFirstPoint().dGetYaxis())
            this->getcpSecoundPoint().vSetYaxis(crectsec.getcpFirstPoint().dGetYaxis());
        if (this->getcpSecoundPoint().dGetYaxis()>crectsec.getcpSecoundPoint().dGetYaxis())
            this->getcpSecoundPoint().vSetYaxis(crectsec.getcpSecoundPoint().dGetYaxis());
        if (this->getcpFirstPoint().dGetYaxis()<crectsec.getcpSecoundPoint().dGetYaxis())
            this->getcpFirstPoint().vSetYaxis(crectsec.getcpSecoundPoint().dGetYaxis());
        if (this->getcpFirstPoint().dGetYaxis()<crectsec.getcpFirstPoint().dGetYaxis())
            this->getcpFirstPoint().vSetYaxis(crectsec.getcpFirstPoint().dGetYaxis());

    }*/
    return *this;
}

CRectangle CRectangle::operator+(const  CPoint2D &cpointsec) {

    double tintX [3];
    double tintY [3];
    tintX[0]=this->getcpFirstPoint().dGetXaxis();
    tintX[1]=this->getcpSecoundPoint().dGetXaxis();
    tintX[2]=cpointsec.dGetXaxis();
    tintY[0]=this->getcpFirstPoint().dGetYaxis();
    tintY[1]=this->getcpSecoundPoint().dGetYaxis();
    tintY[2]=cpointsec.dGetYaxis();
    double iXmax=tintX[0];
    double iXmin=tintX[0];
    double iYmax=tintY[0];
    double iYmin=tintY[0];
    for (int i=0;i<4;i++)
    {
        if (tintX[i]>iXmax) iXmax=tintX[i];
        if (tintX[i]<iXmin) iXmin=tintX[i];
        if (tintY[i]>iYmax) iYmax=tintY[i];
        if (tintY[i]<iYmin) iYmin=tintY[i];
    }

    this->cpFirstPoint.vSetXaxis(iXmin);
    this->cpSecoundPoint.vSetXaxis(iXmax);
    this->cpFirstPoint.vSetYaxis(iYmin);
    this->cpSecoundPoint.vSetYaxis(iYmax);

   /* if (this->getcpFirstPoint().dGetXaxis()<this->getcpSecoundPoint().dGetXaxis())
    {
        if (cpointsec.dGetXaxis()<this->getcpFirstPoint().dGetXaxis())
            this->getcpFirstPoint().vSetXaxis(cpointsec.dGetXaxis());
        if (cpointsec.dGetXaxis()>this->getcpSecoundPoint().dGetXaxis())
            this->getcpSecoundPoint().vSetXaxis(cpointsec.dGetXaxis());
    }
    else
    {
        if (cpointsec.dGetXaxis()>this->getcpFirstPoint().dGetXaxis())
            this->getcpFirstPoint().vSetXaxis(cpointsec.dGetXaxis());
        if (cpointsec.dGetXaxis()<this->getcpSecoundPoint().dGetXaxis())
            this->getcpSecoundPoint().vSetXaxis(cpointsec.dGetXaxis());
    }
    if (this->getcpFirstPoint().dGetYaxis()<this->getcpSecoundPoint().dGetYaxis())
    {
        if (cpointsec.dGetYaxis()<this->getcpFirstPoint().dGetYaxis())
            this->getcpFirstPoint().vSetYaxis(cpointsec.dGetYaxis());
        if (cpointsec.dGetYaxis()>this->getcpSecoundPoint().dGetYaxis())
            this->getcpSecoundPoint().vSetYaxis(cpointsec.dGetYaxis());
    }
    else
    {
        if (cpointsec.dGetYaxis()>this->getcpFirstPoint().dGetYaxis())
            this->getcpFirstPoint().vSetYaxis(cpointsec.dGetYaxis());
        if (cpointsec.dGetYaxis()<this->getcpSecoundPoint().dGetYaxis())
            this->getcpSecoundPoint().vSetYaxis(cpointsec.dGetYaxis());
    }
*/

    return *this;
}

CRectangle CRectangle::operator=(const CRectangle &crectsec) {
    cpFirstPoint=crectsec.cpFirstPoint;
    cpSecoundPoint=crectsec.cpSecoundPoint;
    return *this;
}
