#include <iostream>
using namespace std;
int main ()
{
	int a,b,c;
	cout<<"nhap a,b,c: ";
	cin>>a>>b>>c;
	if (a/b==c || b/c==a || c/a==b){
		cout<<"/";
	}else {
		cout<<"NOSOL";
	}
	return 0;
}
