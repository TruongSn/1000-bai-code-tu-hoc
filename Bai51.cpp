#include <iostream>
//tim chu so lon nhat cua so nguyen duong n
using namespace std;
int main(){
	int n;
	int max=0;
	int digit;
	cout<<"nhap n: ";
	cin>>n;
	if (n>0){
		while (n>0){
			digit =n%10;
			n=n/10;
			if (digit>max){
				max=digit;
			}
		}
		cout<<"chu so lon nhat la: "<<max;
	}else {
		cout<<"nhap lai n";
	}
	return 0;
}
