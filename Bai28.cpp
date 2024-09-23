#include <iostream>
#include <math.h>
using namespace std;
int main (){
	int a,b,c;
	float delta;
	cout<<"nhap cac gia tri a,b,c: ";
	cin>>a>>b>>c;
	delta=b*b-4*a*c;
	if (a!=0){
		if(delta<0){
			cout<<"NO";
		} else if (delta=0){
			cout<<-b/2*a;
		}else if (delta>0){
			cout<<"nghiem cua phuong trinh"<<(-b+sqrt(delta))/2*a<<" "<<(-b-sqrt(delta))/2*a;
		}
	}else{
		if(b==0 && c==0){
			cout<<"INF";
		}
		if(b!=0){
			cout<<-c/b;
		}
		return 0;
	}
	
}
