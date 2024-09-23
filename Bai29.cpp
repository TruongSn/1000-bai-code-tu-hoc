#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float a, b;
    int soNguyenA, soNguyenB;

    cout << "Nhap so a: ";
    cin >> a;
    cout << "Nhap so b: ";
    cin >> b;

    soNguyenA = (int)a;
    soNguyenB = (int)b;

    if (b > a && a >= 0) {
        if (a > 0) {
            cout << "So cac so nguyen trong khoang: " << (soNguyenB - soNguyenA) << endl;
        } else if (a == 0) {
            cout << "So cac so nguyen trong khoang: " << (soNguyenB - soNguyenA + 1) << endl;
        }
    } else if (0 > b && b > a) {
        cout << "So cac so nguyen trong khoang: " << (soNguyenB - soNguyenA ) << endl;
    } else if (b > 0 && 0 > a) {
        cout << "So cac so nguyen trong khoang: " << (soNguyenB - soNguyenA + 1) << endl;
    } else {
        cout << "Nhap lai gia tri khac!" << endl;
    }

    return 0;
}

