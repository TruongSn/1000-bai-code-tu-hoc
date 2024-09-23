#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main ()
{
	float chuvi,dientich;
	int r;
	float pi;
		pi = 3.14159;
	cout<<"nhap gia tri cua ban kinh: ";
	cin>>r;
	if (1<=r&&r<=pow(10,6)){
	
		chuvi=2*pi*r;
	    dientich=pi*r*r;
		cout<<"chu vi cua hinh tron: "<<fixed<<setprecision(2)<<showpoint<<chuvi<<endl;
		cout<<"dien tich cua hinh tron: "<<fixed<<setprecision(2)<<showpoint<<dientich;
	}else {
		cout<<"nhap gia tri khac cua ban kinh !";
	}
	return 0;
	
}
