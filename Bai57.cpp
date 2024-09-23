#include <iostream>
//hay kiem tra so nguyen duong n co toan chu so chan khong ?
using namespace std;
int main (){
	int n;
	bool toansochan = true;
	cout<<"nhap lai n: ";
	cin>>n;
	    if (n>0){
	    	while (n!=0){
	    		int digit = n%10;
	    		n=n/10;
	    		if (digit%2==1){
	    			toansochan=false;
				}
			}
			if (toansochan){
				cout<<"toan so chan";
			}else {
				cout<<"khong phai toan so chan";
			}
		}
    return 0;
}
