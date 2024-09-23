#include <iostream>
//tim uoc chung lon nhat cua hai so nguyen duong a va b
using namespace std;
int main (){
	int a,b;
	int max = 0;
	cin>>a>>b;
	if (a>0 && b>0){
		if (a>b){
			for (int i=1;i<=a;i++){
				if (a%i==0 && b%i==0){
					if (max<i){
						max = i;
					}
				}
			}
	             cout<<"uoc chung lon nhat la: "<<max;    		
			
		}else {
			for (int i=1;i<=b;i++){
				if(a%i==0 && b%i==0){
					if (max=i){
						max=i;
					}
				}
			}
		     	cout<<"uoc chung lon nhat la: "<<max;
		}	
	}else {
		cout<<"nhap lai n";
	}
	return 0;
}
