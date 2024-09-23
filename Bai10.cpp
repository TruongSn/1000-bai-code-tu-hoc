#include <iostream>
#include <math.h>
using namespace std;
int main (){
	int n;
	float sum=0;
	cout<<"nhap gia tri cua n: ";
	cin>>n;
	if (1<=n<=pow(10,9)){
		for(int i=1;i<=n;i++){
			sum=sum+1.0/((i+1)*i);
		}
		cout<<"S(n)="<<sum;
	}else {
		cout<<"nhap lai gia tri cua n!";
	}
	return 0;
}
