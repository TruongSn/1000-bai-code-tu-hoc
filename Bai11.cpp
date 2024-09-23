#include <iostream>
#include <math.h>
using namespace std;
int main (){
	int n;
	int sum = 0;
	cout<<"nhap n: ";
	cin>>n;
	if (1<=n<=pow(10,9)){
		for (int i=1;i<=n;i++){
			sum = sum + 2*i;
		}cout<<"S(n)="<<sum;
	}else{
		cout<<"nhap lai gia tri cua n";
	}
	return 0;
}
