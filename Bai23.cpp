#include <iostream>
using namespace std;
int main (){
	char n;
	cout<<"nhap chu cai: ";
	cin>>n;
	if ( islower(n) ){
		char m = toupper (n);
		cout<<m;
	}else{
		cout<<n;
	}
	return 0;
}
