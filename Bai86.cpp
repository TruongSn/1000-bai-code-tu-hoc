#include <iostream>
#include <math.h>
using namespace std;
int main (){
	int n;
	int sum=0;
	cout<<"nhap n: ";
	cin>>n;
	if (n>=1){
		for (int i=1;i<=n;i++){
			sum+=pow(i,3);
		}
		cout<<sum;
	}else {
		cout<<"nhap lai";
	}
	return 0;
}
