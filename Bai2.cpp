#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
    int x;
    cout<<"nhap gia tri cua x";
    cin>>x;
    if(x<=0||x>pow(10,5)){
        cout<<" Nhap lai gia tri cua x !";
    }else{
        int A=pow(x,3)+3*pow(x,2)+x+1;
        cout<<"Gia tri cua bieu thuc la"<<A;
    }
    return 0;
}
