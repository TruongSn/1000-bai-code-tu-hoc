#include <iostream>
#include <math.h>
using namespace std;

int main (){
    int a, b, c;

    cout << "nhap do dai cac canh tam giac: ";
    cin >> a >> b >> c;

    if (-pow(10,6) <= a && a <= pow(10,6) && -pow(10,6) <= b && b <= pow(10,6) && -pow(10,6) <= c && c <= pow(10,6)) {
        if (a+b <= c || a+c <= b || b+c <= a){
            cout << "khong phai la tam giac";
        } else {
            if ((pow(a,2) + pow(b,2) == pow(c,2)) || (pow(b,2) + pow(c,2) == pow(a,2)) || (pow(a,2) + pow(c,2) == pow(b,2))){
                cout << "3";
            } else if (a == b && b == c) {
                cout << "1";
            } else if (a == b || b == c || a == c) {
                cout << "2";
            } else {
                cout << "tam giac thuong";
            }
        }
    } else {
        cout << "nhap lai gia tri cac canh";
    }

    return 0;
}

