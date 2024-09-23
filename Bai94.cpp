#include <iostream>
//in tat ca cac so nguyen duong le nho hon 100 tru cac so 5,7,93
using namespace std;
int main (){
	for(int i=1;i<100;i++){
		if (i%2==1 && i!=5 &&i!=7 && i!=93){
			cout <<i<<" ";
		}
	}
	return 0;
}
