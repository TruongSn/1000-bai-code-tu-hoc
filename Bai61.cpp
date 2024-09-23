#include <iostream>
//kiem tra xem so nguyen duong n co giam dan tu trai sang phai khong 
using namespace std;
int main() {
    int n;
    int chusobentrai = 10;  
    bool checkgiamdan = true;
    cout << "nhap n: ";
    cin >> n;
    
    if (n > 0) {
        while (n > 0) {
            int chusobenphai = n % 10;
            if (chusobenphai < chusobentrai) {
                chusobentrai = chusobenphai;  
                n = n / 10;  
            } else {
                checkgiamdan = false;
                break;  
            }
        }
        
        if (checkgiamdan) {
            cout << "cac chu so cua so nguyen duong co giam dan tu trai sang phai";
        } else {
            cout << "cac chu so cua so nguyen duong KHONG giam dan tu trai sang phai";
        }
    } else {
        cout << "nhap lai n";
    }
    
    return 0;
}

