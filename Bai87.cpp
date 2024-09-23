#include <iostream>
//tim so nguyen duong n nho nhat sao cho 1+2+3+...+n>10000
using namespace std;
int main (){
	int n=0;
    int sum = 0;
	
		while (sum<10000){
			sum=sum+n;
			n++;
		}
		cout<<n;
	
	
	return 0;
}
