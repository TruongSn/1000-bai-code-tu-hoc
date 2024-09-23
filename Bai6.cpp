#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main (){
	int x1,x2,y1,y2;
	int a,b;
	float khoangcach;
	cout<<"nhap gia tri x1: ";
	cin>>x1;
	cout<<"nhap gia tri y1: ";
	cin>>y1;
	cout<<"nhap gia tri x2: ";
	cin>>x2;
	cout<<"nhap gia tri y2: ";
	cin>>y2;
	if(-pow(10,6)<=x1,y1,x2,y2<=pow(10,6)){
		a=pow((x1-x2),2);
		b=pow((y1-y2),2);
		khoangcach=sqrt(a+b);
		cout<<"khoang cach: "<<fixed<<setprecision(2)<<khoangcach<<endl;
	} else {
		cout<<"nhap lai gia tri toa do";
	};
	return 0;
}
