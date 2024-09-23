#include <iostream>
using namespace std;
int main (){
    int n;
    float sum,T;
    cout<<"enter the value of n: ";
    cin>>n;
    sum=0;
    T=0;
    for (int i=1; i<=n; i++){
    T=T+i;
    sum=sum+1.0/T;
    }
    cout<<"S(n)="<<sum<<endl;
}

