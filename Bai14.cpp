#include <iostream>
#include<math.h>
using namespace std;
int main ()
{
    int x,n;
    float T,sum;
    sum=0;
    cout<<" enter the value of x: ";
    cin>>x;
    cout<<" enter the value of n: ";
    cin>>n;
    float result=1.0;
    for (int i=0; i<=n; i++){
        T=pow(x,(2*i+1));
        sum=sum+T;
    }
    cout<<" The sum S(n): "<<sum<<endl;
}

