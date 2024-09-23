#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main(){
	float c;
	float f;
	cout<<"nhap gia tri cua do C can chuyen sang do F: ";
	cin>>c;
	if(0<c<pow(10,6) && c==(int)c){
		f=(c*9.0/5)+32;
		cout<<"do F: "<<fixed<<setprecision(2)<<showpoint<<f;
	}else{
		cout<<" nhap lai gia tri !";
	}
	return 0;
}
