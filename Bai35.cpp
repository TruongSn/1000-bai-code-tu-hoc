#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;

    cout << "Nhap n: ";
    cin >> n;

    if (n > 1) {
        float result = 0; // Initialize the result
        for (int i = 2; i <= n; i++) {
        	float M=M*i;
            result = sqrt(M + result); // Update the result using the square root function
        }
        cout << "Gia tri cua S(n) la: " << result << endl;
    } else {
        cout << "Nhap lai n" << endl;
    }
    
    return 0;
}

