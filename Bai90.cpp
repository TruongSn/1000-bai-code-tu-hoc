#include <iostream>
// Viet chuuong trinh tim so nguyen duong m lon nhat sao cho 1+2+...+m<N
using namespace std;
int main (){
	int n,m;
	int sum=0;
	cout<<"nhap n: ";
	cin>>n;
	while (sum<n){
	    m++;
		sum=sum+m;
		
			
	}
	cout<<m-1;
	return 0;
}
