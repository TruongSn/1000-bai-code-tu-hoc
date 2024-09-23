#include <iostream>
// nhap x de tinh : f(x) = 2x^2 + 5x + 9 khi x >= 5, f(x) = -2x^2 + 4x – 9 khi x < 5
using namespace std;
int main(){
	int x;
	cout<<"nhap gia tri x: ";
	cin>>x;
	if (x>=5){
		cout<<2*x*x+5*x+9;
	}else {
		cout<<-2*x*x+4*x-9;
	}
	return 0;
}
