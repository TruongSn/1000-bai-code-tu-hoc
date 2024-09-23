#include <iostream>
#include<math.h>
using namespace std;
int main (){
	int n;
	int s;
	int sum=0;
	cout<<"nhap gia tri cua n: ";
	cin>>n;
	if(0<=n<=pow(10,8)){
		for(int i=1;i<=n;i++){
			sum=sum+i;
		
		}	cout<<sum;
	}else{
		cout<<"nhap gia tri khac cua n";
	}
	return 0;
}
