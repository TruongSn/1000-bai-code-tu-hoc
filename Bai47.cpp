#include <iostream>
//tinh tong cac chu so chan cua so nguyen duong n
using namespace std;
int main (){
	int n;
	int sum = 0;
	cout<<"nhap n: ";
	cin>>n;
	if (n>0){
		while (n!=0){
			int digit =n%10;
			n=n/10;
			if (digit %2==0){
				sum+=digit;
			}
		}
		cout<<sum;
		
	}else {
		cout<<"nhap lai";
	}
}
