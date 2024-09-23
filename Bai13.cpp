#include <iostream>
#include <math.h>
using namespace std;
int main (){
	int n;
	cout<<"nhap so n: ";
	cin>>n;
	if (-pow(10,18)<=n<=pow(10,18)){
		if(n%3==0&&n%5==0){
			cout<<"1";
		}else{
		cout<<"0";
		}
	}else{
		cout<<"0";
	}
	return 0;
}
