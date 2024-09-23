#include <iostream>
#include <math.h>
using namespace std;
int main (){
	int n;
	
	cout<<"nhap n: ";
	cin>>n;
	if (n>1){
		float s= sqrt(1);
		for (int i=2;i<=n;i++){
			 s=sqrt(s+i);
		}
		cout<<s;
	}else {
		cout<<"nhap lai n";
	}
	return 0;
}
