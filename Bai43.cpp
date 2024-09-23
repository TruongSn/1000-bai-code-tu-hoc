#include <iostream>
//dem so chu so cua so nguyen duong n
using namespace std;
int main (){
	float n;
	cout<<"nhap n: ";
	cin>>n;
	int sochuso = 0;
	int thu= static_cast<int>(n);
	if (n>0){
		while (thu!=0){
			sochuso=sochuso+1;
			thu = thu/10;
		}
		cout<<sochuso;
		
	}else if (n==0){
		cout<<"1";
	}
	else {
		cout<<"Nhap lai so n";
	}
	
}
