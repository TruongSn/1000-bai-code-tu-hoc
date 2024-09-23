#include <iostream>
//Bai 21: tinh tong cac uoc so cua so nguyen duong n
using namespace std;
int main (){
	int n;
	int sum = 0;
	cout<<"nhap n: ";
	cin>>n;
	if (n>0){
		for (int i=1;i<=n;i++){
			if (n%i==0){
				sum+=i;
				
			}
		}
		cout<<sum;
	}else {
		cout<<"nhap lai n";
	}
	return 0;
}
