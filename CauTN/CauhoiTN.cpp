#include "CauhoiTN.h"
#include <iostream>
using namespace std;
CauhoiTN::CauhoiTN()
{
    sodapandung = 1;
    dapandung.clear();
}

void CauhoiTN::nhap()
{
    cout << "Hay tra loi cau hoi sau " << endl;
    cout << "Nhap cau hoi: ";
    getline(cin, cauhoi);
    cin.ignore();
    dapandung.resize(sodapandung);
    for (int i = 0; i < sodapandung; i++)
    {
        if (i == sodapandung - 1)
        {
            cout << "Nhap dap an dung thu " << i + 1 << ": ";
            getline(cin, dapandung[i], ' ');
        }
        else
        {
            cout << "Nhap dap an sai thu " << i + 1 << ": ";
            getline(cin, dapandung[i]);
            cin.ignore();
        }
    }
}

void CauhoiTN::docfile(ifstream& f)
{
    getline(f, yeucau);
    getline(f, cauhoi);
    f >> sodapandung;
    f.ignore();
    dapandung.resize(sodapandung);
    for (int i = 0; i < sodapandung; i++)
    {
        getline(f, dapandung[i]);
    }
}

void CauhoiTN::ghifile(ofstream& f)
{
    f << yeucau << endl;
    f << cauhoi << endl;
    f << sodapandung << endl;
    for (int i = 0; i < sodapandung; i++)
    {
        f << dapandung[i] << endl;
    }
}

void CauhoiTN::kiemtra()
{
    string traloi;
    cout << "Nhap cau traloi: ";
    getline(cin, traloi, '\n');
    for (int i = 0; i < sodapandung; i++)
    {
        if (traloi == dapandung[i])
        {
            cout << "Dap an dung la: " << dapandung[i] << endl;
            return;
        }
    }
    cout << "Dap an sai!" << endl;
}

void CauhoiTN::xuat()
{
    cout << "Yeu cau: " << yeucau << endl;
    cout << "Cau hoi: " << cauhoi << endl;
    cout << "So dap an dung: " << sodapandung << endl;
    for (int i = 0; i < sodapandung; i++)
    {
        if (dapandung[i][0] == '*')
        {
            cout << "Dap an dung la: " << dapandung[i].substr(1) << endl;
            return;
        }
    }
}

bool giongnhau(CauhoiTN cau1, CauhoiTN cau2)
{
    // Kiểm tra hai câu hỏi có trùng nhau hay không
    return cau1.cauhoi == cau2.cauhoi;
}