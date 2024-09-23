#include <iostream>
using namespace std;
int main (){
	int n;
	int tich=1;
	cout<<"nhap n: ";
	cin>>n;
	if (n>0){
		while (n>0){
			int digit = n%10;
			tich*=digit;
			n=n/10;
		}
		cout<<tich;
		
	}else if (n==0){
		cout<<"chi co mot chu so, khong the tinh tich";
	}else {
		cout<<"nhap lai n";
	}
	return 0;
}
