#include <iostream>
//viet chuong trinh in bang cuu chuong ra man hinh
using namespace std;
int main (){
	int n;
	cout<<"nhap bang cuu chuong cua so may : ";
	cin>>n;
	for (int i=1;i<=9;i++){
		cout<<n<<"*"<<i<<"="<<n*i<<endl;
	} 
	return 0;
	
}
