#include <iostream>
using namespace std;
int main (){
	float a,b;
	cout<<"nhap a,b: ";
	cin>>a>>b;
	if (a==0){
		cout <<"vo nghiem";
	}else {
		cout<<"nghiem cua phuong trinh"<< (-b/a);
	}
	return 0;
}
