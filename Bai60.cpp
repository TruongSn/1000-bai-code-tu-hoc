#include <iostream>
// kiem tra cac chu so cua so nguyen duong n co tang dan tu trai sang phai khong?
using namespace std;

int main() {
    int n;
    cout << "nhap n: ";
    cin >> n;
    int chusobenphai;
    int chusobentrai;
    bool checksotangdan = true;

    if (n > 0) {
        while (n != 0) {
            chusobenphai = n % 10;
            n = n / 10;
            chusobentrai = n % 10;

            if (chusobenphai < chusobentrai) {
                checksotangdan = false;
            }
        }
        if (checksotangdan) {
            cout << "cac chu so cua so nguyen duong n tang dan tu trai sang phai";
        } else {
            cout << "cac chu so cua so nguyen duong n khong tang dang tu trai sang phai";
        }
    } else {
        cout << "nhap lai n";
    }
    return 0;
}

