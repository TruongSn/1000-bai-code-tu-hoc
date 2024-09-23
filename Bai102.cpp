#include <iostream>
using namespace std;

bool namnhuan (int nam) {
    if (nam % 4 == 0 && nam % 100 != 0 || nam % 400 == 0) {
        return true;
    }
    return false;
}

int timsongaytrongthang(int thang, int nam) {
    int ngaytrongthang;
    switch (thang) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            ngaytrongthang = 31;
            break;
        case 4: case 6: case 9: case 11:
            ngaytrongthang = 30;
            break;
        case 2:
            if (namnhuan(nam)) {
                ngaytrongthang = 29;
            } else {
                ngaytrongthang = 28;
            }
            break;
        default:
            cout << "Nhap lai";
    }
    return ngaytrongthang;
}

void timngaytieptheo (int ngay, int thang, int nam) {
    int ngaytrongthang = timsongaytrongthang(thang, nam); // goi cai ham ben tren
    if (ngay < ngaytrongthang) {
        ngay++;
    } else if (thang < 12) {
        ngay = 1;
        thang++;
    } else {
        thang = 1;
        nam++;
    }
    cout << ngay << "/" << thang << "/" << nam;
}

int main() {
    int ngay, thang, nam;
    do {
        cout << "nhap nam: ";
        cin >> nam;
        if (nam < 0) {
            cout << "nhap lai";
        }
    } while (nam < 0);

    do {
        cout << "nhap thang: ";
        cin >> thang;
        if (thang < 1 || thang > 12) {
            cout << "nhap lai";
        }
    } while (thang < 1 || thang > 12);

    int ngaytrongthang = timsongaytrongthang(thang, nam);
    do {
        cout << "nhap ngay: ";
        cin >> ngay;
        if (ngay < 1 || ngay > ngaytrongthang) {
            cout << "nhap lai";
        }
    } while (ngay < 1 || ngay > ngaytrongthang);

    timngaytieptheo(ngay, thang, nam);
    return 0;
}

