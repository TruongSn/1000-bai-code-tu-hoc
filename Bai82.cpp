#include <iostream>
//tim so lon nhat trong 3 so thuc a,b,c
using namespace std;
int main (){
	int a,b,c;
	cout<<"nhap: ";
	cin>>a>>b>>c;
	   if (a>b && a>c){
	   	cout<<a;
	   }else if (b>c && b>a){
	   	cout<<b;
	   }else {
	   	cout<<c;
	   }
	   return 0;
}
