//
// Created by pivekk on 25.10.2016.
//

#ifndef LISTA_2_CPOINT_H
#define LISTA_2_CPOINT_H


class CPoint2D {
private:
    double *dXaxis;
    double *dYaxis;
public:
    void vSetXaxis (double iX) { *dXaxis= iX;}
    void vSetYaxis (double iY) { *dYaxis= iY;}
    double dGetXaxis () const{ return *dXaxis;}
    double dGetYaxis () const{ return *dYaxis;}
    CPoint2D (double dX,double dY);
    //CPoint2D();
    ~CPoint2D();
    double dCheckDistance (CPoint2D secound);
    CPoint2D ( const CPoint2D &cPointother);
    CPoint2D operator= (const CPoint2D &cpointsec);
};


#endif //LISTA_2_CPOINT_H
