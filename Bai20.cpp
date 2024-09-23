#include <iostream>
using namespace std;
int main (){
	char n;
	cout<<"nhap chu cai: ";
	cin>>n;
	if(isdigit(n)){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
	return 0;
}
