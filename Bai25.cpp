#include <iostream>
#include <math.h>
using namespace std;
int main (){
	int a,b,c;
	cout <<"nhap do dai cac canh tam giac: ";
	cin>>a>>b>>c;
		if (-pow(10,6)<=a,b,c<=pow(10,6)){
			if (a+b<=c){
				cout<<"khong phai la tam giac";
			} else if (a+c<=b){
				cout<<"khong phai la tam giac";
			}else if (b+c<=a){
				cout<<"khong phai la tam giac";
			}else {
				cout<<"day la tam giac";
			}
		}else{
			cout<<"nhap lai gia tri cua tam giac";
		}
}
