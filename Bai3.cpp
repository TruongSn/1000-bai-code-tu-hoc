#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Nhap lan luot cac gia tri cua a,b,c: ";
    cin>>a >>b >>c;
    if (0<abs(a),abs(b),abs(c)&&abs(a),abs(b),abs(c)<pow(10,9)){
        int S=a*(b+c)+b*(a+c);
        cout<<S;
    }else{
        cout<<"nhap lai gia tri a,b,c";
    }
    return 0;
}
