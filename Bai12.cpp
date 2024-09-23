#include <iostream>
#include <math.h>
using namespace std;
int main (){
	int a,b;
	cout<<"nhap so a: ";
	cin>>a;
	cout<<"nhap so b: ";
	cin>>b;
	if(1<=b<=a<=pow(10,8)){
		
		cout<<"ket qua la: "<<(a/b)*b;
	}else{
		cout<<" nhap ket qua khac ";
	}
	return 0;
}
