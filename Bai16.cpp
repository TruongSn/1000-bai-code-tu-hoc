#include <iostream>
#include <math.h>
using namespace std;
int main (){
	int n;
	cout <<"nhap nam can tinh: ";
	cin>>n;
	if (-pow(10,6)<=n<=pow(10,6)){
		if(n%400==0||n%4==0&&n%100!=0){
			cout<<"nam do la nam nhuan";
		}else{
			cout<<"nam do khong la nam nhuan";
		}
	}else{
		cout<<"nhap lai!";
	}
	return 0;
}
