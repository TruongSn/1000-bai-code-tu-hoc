#include <iostream>
using namespace std;
int main (){
	int n;
	int sum=0;
	cout<<"nhap so n: ";
	cin>>n;
	if (n>0){
		while (n>0){
			int digit=n%10;// lay chu so cuoi cung , tuc la lay mod
			n=n/10; //loai bo chu so
		}
		cout<<sum;
	}else if (n==0){
		cout<<"chi co mot chu so, khong tinh duoc tong";
	}else {
		cout <<"nhap lai n";
	}
	return 0;
}
