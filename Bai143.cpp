#include <iostream>
using namespace  std;

int tim_chan_dau (int a[], int n){
    for (int i =0; i <n;i++){
        if (a[i]%2==0){
            return a[i];
        }
    }
    return -1;
}
int main (){
    int n;
    cout<<"Nhap gia tri phan tu cua mang: ";
    cin>>n;
    int a[n];
    cout<<"Nhap mang : "<<endl;
    for (int i=0; i<n;i++){
        cin>>a[i];
    }
    int result = tim_chan_dau (a,n);
    cout<<"Ket qua la: "<<result;
    return 0;

}