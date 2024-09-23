#include <iostream>
//tinh tich cac chu so le cua so nguyen duong n
using namespace std;
int main (){
	int n;
	int tich =1;
	bool cochusole =false;
	cout<<"nhap n: ";
	cin>>n;
	if (n>0){
		while (n!=0){
			int digit = n%10;
			n=n/10;
		   if (digit%2==1){
		   	tich*=digit;
		   	cochusole=true;
		   }
		   
		}
		if (cochusole){
			cout<<tich;
		}else {
			cout<<"khong co chu so le";
		}
		
	}else {
		cout<<"nhap lai";
	}
	return 0;
}
