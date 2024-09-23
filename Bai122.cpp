#include <iostream>
using namespace std;

const int MAX = 100; // Define the maximum size of the array

void nhap(float a[], int &n) {
    do {
        cout << "Nhap so phan tu: ";
        cin >> n;
        if (n <= 0) {
            cout << "Nhap lai: ";
        }
    } while (n <= 0);

    for (int i = 0; i < n; i++) {
        cout << "Nhap phan tu thu " << i + 1 << ": ";
        cin >> a[i];
    }
}

float lonnhat(float a[], int n) {
    float ln = a[0];
    for (int i = 0; i < n; i++) {
        if (a[i] > ln) {
            ln = a[i];
        }
    }
    return ln;
}

void xuat(float a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}

int main() {
    int n;
    float a[MAX];
    nhap(a, n);
    xuat(a, n);
    float ln = lonnhat(a, n);
    cout << "Phan tu lon nhat trong mang la: " << ln;
    return 0;
}

