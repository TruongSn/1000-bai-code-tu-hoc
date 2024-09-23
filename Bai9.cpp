#include <iostream>
#include <math.h>
using namespace std;
int main (){
	int n;
	cout<<"nhap so n:";
	cin>>n;
	int s=0;
	if(0<=n<=pow(10,5)){
	
	for(int i=1;i<=n;i++){
		s=s+i*i;
	}
	cout<<"S(n)="<<s;}
	else {
		cout<<"nhap lai gia tri n!";
	}
	return 0;
}
