#include <iostream>
//kiem tra xem thang thuoc quy may cua nam
using namespace std;

int main() {
    int a;
    cout << "Nhap thang: ";
    cin >> a;

    if (a >= 1 && a <= 3) {
        cout << "Quy 1";
    } else if (a >= 4 && a <= 6) {
        cout << "Quy 2";
    } else if (a >= 7 && a <= 9) {
        cout << "Quy 3";
    } else if (a >= 10 && a <= 12) {
        cout << "Quy 4";
    } else {
        cout << "Thang khong hop le";
    }

    return 0;
}

