#include <iostream>
using namespace std;
int main(){
	int n;
	int i=0;
	cout<<"nhap n: ";
	cin>>n;
	int sum=0;
	if(n>0){
		while (sum+i<n){
			i++;
			sum+=i;
		}
		cout<<i;
	
		}else {
			cout<<"nhap lai n";
		}
		return 0;
	}

