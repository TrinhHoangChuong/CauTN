#ifndef CAUHOITN_H
#define CAUHOITN_H

#include <string>
#include <vector>
#include <fstream>

using namespace std;

class CauhoiTN
{
private:
    string yeucau;
    string cauhoi;
    vector<string> dapandung;
    int sodapandung;

public:
    CauhoiTN();
    void nhap();
    void docfile(ifstream& f);
    void ghifile(ofstream& f);
    void kiemtra();
    void xuat();
    friend bool giongnhau(CauhoiTN cau1, CauhoiTN cau2);
};

#endif