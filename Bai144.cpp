#include <iostream>
#include <cmath>
using namespace std;
bool KiemTraNguyenTo(int n)
{
    if (n < 2)
    {
        return false;
    }
    else if (n > 2)
    {
        if (n % 2 == 0)
        {
            return false;
        }
        for (int i = 3; i <= sqrt((float)n); i += 2)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
    }
    return true;
} 
int so_nguyen_to_dau (int a[], int n){
    for (int i=0;i<n;i++){
        if (KiemTraNguyenTo(a[i])){
            return a[i];
        }
    }
    return -1;
}

int main (){
    int n;
    cout<<"Nhap so luong phan tu cua mang: ";
    cin>>n;
    int a[n];
    cout<<"Nhap mang: "<<endl;
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    int result = so_nguyen_to_dau (a,n);
    cout<<"Ket qua la : "<<result;
    return 0;
}















