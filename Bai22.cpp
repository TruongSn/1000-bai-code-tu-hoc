#include <iostream>
using namespace std;
int main (){
	char n;
	cout<<"nhap chu cai: ";
	cin>>n;
	if ( isupper(n) ){
		char m = tolower (n);
		cout<<m;
	}else{
		cout<<n;
	}
	return 0;
}
