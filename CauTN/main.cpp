#include <iostream>
#include "CauhoiTN.h"

using namespace std;

int main()
{
    CauhoiTN cauhoi;
    int chon;
    ifstream f;
    ofstream g;

    // Tạo menu
    do {
        cout << "1. Nhap cau hoi\n";
        cout << "2. Doc cau hoi tu file\n";
        cout << "3. Ghi cau hoi vao file\n";
        cout << "4. Kiem tra cau hoi\n";
        cout << "5. Xuat cau hoi\n";
        cout << "6. Kiem tra hai cau hoi co trung nhau hay khong\n";
        cout << "7. Thoat\n";
        cout << "Chon chuc nang: ";
        cin >> chon;
        switch (chon) {
        case 1:
            cauhoi.nhap();
            break;
        case 2:
            // Doc cau hoi tu file
        {
            ifstream f("cauhoi.txt");
            if (f.is_open()) {
                cauhoi.docfile(f);
                f.close();
            }
            else {
                cout << "Khong mo duoc file cauhoi.txt\n";
            }
        }
        break;
        case 3:
            // Ghi cau hoi vao file
        {
            ofstream g("cauhoi.txt");
            if (g.is_open()) {
                cauhoi.ghifile(g);
                g.close();
            }
            else {
                cout << "Khong mo duoc file cauhoi.txt\n";
            }
        }
        break;
        case 4:
            cauhoi.kiemtra();
            break;
        case 5:
            cauhoi.xuat();
            break;
        case 6:
        {
            CauhoiTN cauhoi2;
            cauhoi2.nhap();
            if (giongnhau(cauhoi, cauhoi2)) {
                cout << "Hai cau hoi trung nhau\n";
            }
            else {
                cout << "Hai cau hoi khong trung nhau\n";
            }
        }
        break;
        case 7:
            break;
        default:
            cout << "Chuc nang khong hop le\n";
        }
    } while (chon != 7);

    return 0;
}