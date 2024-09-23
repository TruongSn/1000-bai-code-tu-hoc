#include <iostream>
//can co tong 200.000 dong tu cac loai giay 1000 dong, 2000 dong, 5000 dong.Hay neu cac truong hop co the xay ra
using namespace std;
int main (){
	for (int i=1;i<200;i++){
		for (int j=1;j<100;j++){
			for (int g=1;g<40;g++){
				if (i*1000+j*2000+g*5000==200000){
					cout<<i<<"-"<<j<<"-"<<g<<endl;
				}
			}
		}
	}
	return 0;
}
