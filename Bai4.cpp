#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main (){
	int tong, hieu,ticha,a,b;
	float thuong;
	cout<<"nhap gia tri cua a ";
	cin>>a;
	cout<<"nhap gia tri cua b ";
	cin>>b;
	if (-pow(10,9)<=a,b<=pow(10,9)){
		cout<<"tong: "<<a+b<<endl;
		cout<<"hieu: "<<a-b<<endl;
		cout<<"tich: "<<a*b<<endl;
		if(b!=0){
			thuong=float(a)/b;
			cout<<"thuong: "<<fixed<<setprecision(2)<<showpoint<<thuong;
		}else{
			cout<<"gia tri cua thuong khong hop le, nhap gia tri b phu hop hon !";
		}
	}else{
		cout<<" nhap lai gia tri cua a,b";
	}
	return 0;
}
	
