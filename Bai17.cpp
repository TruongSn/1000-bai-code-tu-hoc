#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int t, n;
    cout << "nhap gia tri cua n: ";
    cin >> n;
    cout << "nhap gia tri cua t: ";
    cin >> t;
    
    if (-pow(10,6) <= t && t <= pow(10,6) && -pow(10,6) <= n && n <= pow(10,6)) {
        if (t < 1 || t > 12 || n < 0) {
            cout << "INVALID";
        } else if (t == 2) {
            if (n % 400 == 0 || (n % 4 == 0 && n % 100 != 0)) {
                cout << "29" << endl;
            } else {
                cout << "28" << endl;
            }
        } else if (t == 1 || t == 3 || t == 5 || t == 7 || t == 8 || t == 10 || t == 12) {
            cout << "31";
        } else {
            cout << "30";
        }
    } else {
        cout << "nhap lai gia tri khac !";
    }

    return 0;
}

