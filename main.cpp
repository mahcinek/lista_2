#include <iostream>
#include <iterator>
#include <vector>
#include <sstream>
#include <stdlib.h>
#include "CPoint2D.h"
#include "CRectangle.h"
using namespace std;

int main() {
   /* CPoint2D *a = new CPoint2D (0.0,0.0);
    CPoint2D *b = new CPoint2D(3.0,4.0);*/
   /* double x= a->dCheckDistance(*b);
    cout<<x<<endl;*/
    string command;
    cout << "Podaj komende:" << endl;
    std::cin.sync();
    std::getline( std::cin, command );
    int iVal1 = -1;
    double iVal2 =-1;
    double iVal3=-1;
    double iVal4=-1;
    double iVal5=-1;
    stringstream ss(command);
    istream_iterator<string> begin(ss);
    istream_iterator<string> end;
    vector<string> vstrings(begin, end);
    copy(vstrings.begin(), vstrings.end(), std::ostream_iterator<std::string>(std::cout, "\n"));
    iVal1=stoi(vstrings[1].c_str());
    iVal2=stoi(vstrings[2].c_str());
    CPoint2D * tCpoint [iVal1];
    CRectangle * tCrectangle [(int)iVal2];
    for (int i = 0;i<iVal1;i++)
    {
        tCpoint[i]= nullptr;
    }
    for (int j = 0; j <iVal2 ; j++) {
        tCrectangle[j]= nullptr;
    }
    bool menu = true;
    while (menu) {
        cout << "Podaj komende:" << endl;
        std::cin.sync();
        std::getline(std::cin, command);
        stringstream ss(command);
        istream_iterator<string> begin(ss);
        istream_iterator<string> end;
        vector<string> vstrings(begin, end);
        copy(vstrings.begin(), vstrings.end(), std::ostream_iterator<std::string>(std::cout, "\n"));
        string sCommnad = vstrings[0];
        if (sCommnad == "!createPoint") {
            if (vstrings.capacity()<4) cout<<"ERROR"<<endl;
            else{
            iVal3 = stod(vstrings[3].c_str());
            iVal1 = stoi(vstrings[1].c_str());
            iVal2 = stod(vstrings[2].c_str());
            cout<<iVal2<<iVal3<<endl;
            tCpoint[iVal1] = new CPoint2D(iVal2, iVal3);}
            vstrings.clear();
            continue;
        } else if (sCommnad == "!createPointCopy") {
            if (vstrings.capacity()<3) cout<<"ERROR"<<endl;
            else{
            iVal1 = stoi(vstrings[1].c_str());
            iVal2 = stod(vstrings[2].c_str());
            if (tCpoint[(int)iVal2]== nullptr) cout<<"Error"<<endl;
            else {
            tCpoint[iVal1] = new CPoint2D(*tCpoint[(int) iVal2]);}}
            vstrings.clear();
            continue;
        } else if (sCommnad == "!setPoint") {
            if (vstrings.capacity()<4) cout<<"ERROR"<<endl;
            else{
            iVal1 = stoi(vstrings[1].c_str());
            iVal2 = stod(vstrings[2].c_str());
            iVal3 = stod(vstrings[3].c_str());
            if (tCpoint[iVal1]== nullptr) cout<<"Error"<<endl;
            else {
            tCpoint[iVal1]->vSetXaxis(iVal2);
            tCpoint[iVal1]->vSetYaxis(iVal3);}}
            vstrings.clear();
            continue;
        }
        else if (sCommnad == "!getPointX") {
            if (vstrings.capacity()<2) cout<<"ERROR"<<endl;
            else{
            iVal1 = stoi(vstrings[1].c_str());
            if (tCpoint[iVal1]== nullptr) cout<<"Error"<<endl;
            else {
            cout<<tCpoint[iVal1]->dGetXaxis()<<endl;}}
            vstrings.clear();
            continue;
        }
        else if (sCommnad == "!getPointY") {
            if (vstrings.capacity()<2) cout<<"ERROR"<<endl;
            else{
            iVal1 = stoi(vstrings[1].c_str());
            if (tCpoint[iVal1]== nullptr) cout<<"Error"<<endl;
            else {
            cout<<tCpoint[iVal1]->dGetYaxis()<<endl;}}
            vstrings.clear();
            continue;
        }
        else if (sCommnad == "!createRectDouble") {
            if (vstrings.capacity()<6) cout<<"ERROR"<<endl;
            else{
            iVal1 = stoi(vstrings[1].c_str());
            iVal2 = stod(vstrings[2].c_str());
            iVal3 = stod(vstrings[3].c_str());
            iVal4 = stod(vstrings[4].c_str());
            iVal5 = stod(vstrings[5].c_str());
            delete tCrectangle[iVal1];
            tCrectangle[iVal1]=new CRectangle(iVal2,iVal3,iVal4,iVal5);}
            vstrings.clear();
            continue;
        }

        else if (sCommnad == "!createRectPoints") {
            if (vstrings.capacity()<4) cout<<"ERROR"<<endl;
            else{
            iVal1 = stoi(vstrings[1].c_str());
            iVal2 = stoi(vstrings[2].c_str());
            iVal3 = stoi(vstrings[3].c_str());
            if (tCpoint[(int)iVal2]== nullptr||tCpoint[(int)iVal3]== nullptr) cout<<"Error"<<endl;
            else{
            delete tCrectangle[iVal1];
            tCrectangle[iVal1]= new CRectangle(*tCpoint[(int)iVal2],*tCpoint[(int)iVal3]);}}
            vstrings.clear();
            continue;
        }
        else if (sCommnad == "!createRectCopy") {
            if (vstrings.capacity()<3) cout<<"ERROR"<<endl;
            else{
            iVal1 = stoi(vstrings[1].c_str());
            iVal2 = stoi(vstrings[2].c_str());
            if (tCrectangle[(int)iVal2]== nullptr) cout<<"Error"<<endl;
            else{
            delete tCrectangle[iVal1];
            tCrectangle[iVal1]=new CRectangle (*tCrectangle[(int)iVal2]);}}
            vstrings.clear();
            continue;
        }

        else if (sCommnad == "!fieldRect") {
            if (vstrings.capacity()<2) cout<<"ERROR"<<endl;
            else{
            iVal1 = stoi(vstrings[1].c_str());
            if (tCrectangle[iVal1]== nullptr) cout<<"Error"<<endl;
            else{
            cout<< tCrectangle[iVal1]->dCountField()<<endl;}}
            vstrings.clear();
            continue;
        }
        else if (sCommnad == "!showRect") {
            if (vstrings.capacity()<2) cout<<"ERROR"<<endl;
            else{
            iVal1 = stoi(vstrings[1].c_str());
            if (tCrectangle[iVal1]== nullptr) cout<<"Error"<<endl;
            else {
                cout << "CRectangle(CPoint2D(" << tCrectangle[iVal1]->getcpFirstPoint().dGetXaxis() << ","
                     << tCrectangle[iVal1]->getcpFirstPoint().dGetYaxis() << "),CPoint2D("
                     << tCrectangle[iVal1]->getcpSecoundPoint().dGetXaxis() << ","
                     << tCrectangle[iVal1]->getcpSecoundPoint().dGetYaxis() << "))" << endl;
            }}
            vstrings.clear();
            continue;
        }
        else if (sCommnad == "exit") {
            menu= false;
            vstrings.clear();
            continue;
        }
        else
        {
            cout<<"Zla komenda"<<endl;
            vstrings.clear();
            continue;
        }


    }
    return 0;
}