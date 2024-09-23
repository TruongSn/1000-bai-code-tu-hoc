#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;

    if (n > 0) {
        while (n >= 10) {
            n = n / 10;
        }
        cout << "Chu so dau tien cua n la: " << n;
    } else {
        cout << "Ban da nhap so am hoac so 0. Xin vui long nhap lai!";
    }
    return 0;
}

