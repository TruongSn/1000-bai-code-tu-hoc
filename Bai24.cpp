#include <iostream>
using namespace std;
int main (){
	char n;
	cout<<"nhap chu cai: ";
	cin>>n;
	if (isalpha(n)){
		if (n=='z'||n=='Z'){
			cout<<'a'<<endl;
		}else{
			cout<<char(tolower(n)+1)<<endl;
		}
	}else{
		cout<<"INVALID"<<endl;
	}
	return 0;
}
