#include <iostream>
using namespace std;

// tim so ngay trong thang
void timsongaytrongthang(int thang, int nam);

void timsongaytrongthang(int thang, int nam) {
    switch (thang) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            cout << "Thang co 31 ngay";
            break;
        case 4: case 6: case 9: case 11:
            cout << "Thang co 30 ngay";
            break;
        case 2:
            if (nam % 4 == 0 && (nam % 100 != 0 || nam % 400 == 0)) {
                cout << "Thang co 29 ngay";
            } else {
                cout << "Thang co 28 ngay";
            }
            break;
        default:
            cout << "Nhap lai";
    }
}

int main() {
    int nam;
    int thang;

    bool namnhuan = false;

    cout << "Nhap thang: " << endl;
    cin >> thang;
    cout << "Nhap nam: ";
    cin >> nam;

    
    if ((nam % 4 == 0 && nam % 100 != 0) || nam % 400 == 0) {
        namnhuan = true;
    }

    
    if (1 <= thang && thang <= 12) {
        timsongaytrongthang(thang, nam); 
    } else {
        cout << "Nhap lai";
    }
    return 0;
}



