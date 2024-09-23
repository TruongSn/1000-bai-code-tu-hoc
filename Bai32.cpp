#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3, num4, num5;
    
    cout << "Nh?p s? th? nh?t: ";
    cin >> num1;
    cout << "Nh?p s? th? hai: ";
    cin >> num2;
    cout << "Nh?p s? th? ba: ";
    cin >> num3;
    cout << "Nh?p s? th? tu: ";
    cin >> num4;
    cout << "Nh?p s? th? nam: ";
    cin >> num5;

    int secondSmallest;

    if (num1 < num2 && num1 < num3 && num1 < num4 && num1 < num5) {
        secondSmallest = num2;
    } else if (num2 < num1 && num2 < num3 && num2 < num4 && num2 < num5) {
        secondSmallest = num1;
    } else if (num3 < num1 && num3 < num2 && num3 < num4 && num3 < num5) {
        secondSmallest = num3;
    } else if (num4 < num1 && num4 < num2 && num4 < num3 && num4 < num5) {
        secondSmallest = num4;
    } else {
        secondSmallest = num5;
    }

    cout << "S? nh? th? hai là: " << secondSmallest << endl;

    return 0;
}
