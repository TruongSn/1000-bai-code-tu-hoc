#include <iostream>
//tim boi chung nho nhat cua hai so nguyen duong a,b
using namespace std;
int main (){
	int a,b;
	int bcnn;
	cout <<"nhap a: ";
	cin>>a;
	cout<<"nhap b: ";
	cin>>b;
	if (a>0 && b>0){
		int bcnn = (a > b) ? a : b;
		while (1){
			if (bcnn%a==0 && bcnn%b==0){
				cout<<"Boi chung nho nhat:" <<bcnn;
				break;
			}
			bcnn++;
		}
	}else {
		cout<<"nhap lai";
	}
	return 0;
}
