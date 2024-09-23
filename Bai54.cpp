#include <iostream>
//dem so luong chu so nho nhat cua so nguyen duong n
using namespace std;
int main (){
int n; 
int count = 0;
int min =9;
cout<<"nhap n: ";
cin>>n;
    if (n>0){
    	while(n!=0){
    		int digit = n%10;
    		n=n/10;
    		    if(digit<min){
    			min = digit;
    			count=count + 1;
			}
		}
		cout <<count;
	}else {
		cout<<"nhap lai";
	}
return 0;	
}
