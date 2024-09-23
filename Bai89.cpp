#include <iostream>
// viet chuong trinh tinh tong cac gia tri le nguyen duong nho hon N
using namespace std;
int main (){
	int n;
	int sum =0;
	cout<<"nhap n";
	cin>>n;
	
	if (n>0){
		for (int i=1;i<n;i++){
			if (i%2==1){
				sum = sum+i;
			}
		}
		cout<<sum;
	}else {
		cout<<"nhap lai n";
	}
	return 0;
}
