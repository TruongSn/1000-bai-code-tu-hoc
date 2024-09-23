#include <iostream>
// xet so co phai so doi xung khong
using namespace std;
int main (){
	int n;
	int songhichdao=0;
	cout<<"nhap n: ";
	cin>>n;
	int sobandau=n;
	   if(n>0){
	   	  while (n!=0){
	   	  	int digit = n%10;
	   	  	songhichdao= songhichdao*10+digit;
	   	  	n=n/10;
			}
			if (songhichdao==sobandau){
				cout<<"la so doi xung";
			}else{
				cout<<"khong la so doi xung";
			}
	   }else {
	   	cout<<"nhap lai n";
	   }
	return 0;
}
