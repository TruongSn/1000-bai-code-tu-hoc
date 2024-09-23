#include <iostream>
//dem cac chu so le cua so nguyen duong n
using namespace std;
int main (){
	int n;
	int sochuso =0;
	float thu;
	cout<<"nhap n: ";
	cin>>n;
	if (n>0){
		while (n!=0){
			int digit = n%10;
			n=n/10;
			if(digit % 2!=0){
				sochuso=sochuso+1;
			}
		}
		cout<<sochuso;
	}else if (n==0){
		cout<<"0";
	}else {
		cout<<"nhap lai";
	}
}
