#include <iostream>
using namespace std;

bool kiemtranamnhuan(int nam) {
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
            if (kiemtranamnhuan(nam)) {
                ngaytrongthang = 29;
            }
            else {
                ngaytrongthang = 28;
            }
            break;
        default:
            cout << "nhap lai";
    }
    return ngaytrongthang;
}

int timngaythubaonhieutrongnam(int ngay, int thang, int nam) {
    int ngaytrongthang = timsongaytrongthang(thang, nam);
    int s = ngay;
    for (int i = 1; i < thang; i++) {
        s = s + ngaytrongthang;
    }
    return s;
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

    int s = timngaythubaonhieutrongnam(ngay, thang, nam);
    cout << s;

    return 0;
}

