#include <iostream>
// tinh hpt : ax+by=c, dx+ey=f
using namespace std;

int main() {
    float a, b, c, d, e, f;
    cout << "Nhap a: ";
    cin >> a;
    cout << "Nhap b: ";
    cin >> b;
    cout << "Nhap c: ";
    cin >> c;
    cout << "Nhap d: ";
    cin >> d;
    cout << "Nhap e: ";
    cin >> e;
    cout << "Nhap f: ";
    cin >> f;

    float D = a * e - b * d;
    float Dx = c * e - b * f;
    float Dy = a * f - c * d;

    if (D != 0) {
        float x = Dx / D;
        float y = Dy / D;
        cout << "Nghiem cua he phuong trinh la: " << "x = " << x << ", y = " << y << endl;
    } else {
        if (Dx == 0 && Dy == 0) {
            cout << "He phuong trinh co vo so nghiem." << endl;
        } else {
            cout << "He phuong trinh vo nghiem." << endl;
        }
    }

    return 0;
}

