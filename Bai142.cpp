#include <iostream>
using namespace std;
int main (){
    int n;
    cout<<"Nhap so luong phan tu ";
    cin>>n;
    int a[n];
    cout<<"Nhap mang : ";
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    int min=a[0];
    for (int i=0;i<n;i++){
        if (min > a[i]){
            min = a[i];
        }
    }
    cout<<"Ket qua la: "<< min;
    return 0;
}