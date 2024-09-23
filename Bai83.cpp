#include <iostream>
// kiem tra hai so thuc co cung dau hay khong 
using namespace std;
int main (){
	int a,b;
	cin>>a>>b;
	if (a*b<0){
		cout<<"khong cung dau";
	} 
	if (a*b>0){
		cout<<"cung dau";
	}
	
	if (a*b==0){
		cout<<" co mot so bang 0";
	}
	return 0;
}
