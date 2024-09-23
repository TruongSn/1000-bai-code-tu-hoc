#include <iostream>
#include <cmath>
using namespace std;
int main (){
	int n;
	cout<<"nhap n: ";
	cin>>n;
	if (n>1){
		float s=sqrt(2);
		for (int i=2;i<=n;i++){
			s=sqrt(2+s);
		}
		cout<<s;
	}else {
		cout<<"nhap lai n";}
	return 0;
}
