#include <iostream>
// dem so luong chu so lon nhat cua so nguyen duong n
using namespace std;
int main (){
	int n;
	int count = 0;
	cout<<"nhap n: ";
	cin>>n;
	int max = -1;
	if (n>0){
		while (n!=0){
			int digit = n%10;
			n=n/10;
			if (digit>max){
				max = digit;
				count=1;
			}else if ( digit ==max){
				count=count +1;
			}
		}
		cout<<count;
	}else {
		cout<<"nhap lai n";
	}
	return 0;
}
