#include <iostream>
//tim chu so nho nhat cua so nguyen duong n
using namespace std;
int main (){
	int n;
	int digit;
	int min=9;
	cout<<"nhap n: ";
	cin>>n;
	if (n>0){
		while (n>0){
			digit=n%10;
			n=n/10;
			   if (digit < min){
			   	  min =digit;
			   }
		}
		cout<<min;
	}else {
		cout<<"nhap lai n";
	}
	return 0;
}
