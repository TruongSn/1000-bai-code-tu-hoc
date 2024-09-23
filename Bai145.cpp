#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap so luong phan tu cua mang: ";
    cin >> n;
    
    int a[n];
    cout << "Nhap mang: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int result = 0;  // Khai báo biến result ngoài vòng lặp

    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 1; j <= a[i] / 2; j++) {
            if (a[i] % j == 0) {
                sum += j;
            }
        }
        
        bool kiemtra = (a[i] == sum);  // Kiểm tra xem số có phải số hoàn hảo hay không
        
        if (kiemtra) {
            result = a[i];  // Nếu không phải số hoàn hảo, gán giá trị của a[i] cho result
        } else {
            result = -1;  // Nếu là số hoàn hảo, gán result là -1
        }
        
        cout << "Ket qua cho phan tu a[" << i << "] la: " << result << endl;
    }

    return 0;
}
