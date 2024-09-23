#include <iostream>
//kiem tra so nguyen duong n co toan chu so le hay khong ?
using namespace std;
int main (){
	int n;
	int count = 0 ;
	bool toansole = true;
	cout <<"nhap n: ";
	cin>>n;
	if (n>0){
		while (n!=0){
			int digit = n%10;
			n=n/10;
			if(digit%2==0){
				toansole =false ;
			}
		}
		if (toansole){
			cout<<"toan so le";
		}else {
			cout<<"khong phai toan so le";
		}
		
	}else {
		cout<<"nhap lai n";
	}
	return 0;
}
