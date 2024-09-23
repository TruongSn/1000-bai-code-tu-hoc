#include <iostream>
using namespace std;
int main (){
	float diemhs1, diemhs12, diemhs2,diemhs3;
	cout<<"nhap diem: ";
	cin>>diemhs1>>diemhs12>>diemhs2>>diemhs3;
	float dtb = (diemhs1+diemhs12+diemhs2*2+diemhs3*3)/7;
	if (dtb>=8){
		cout<<"Gioi";
	}else if (6.5<=dtb<8){
		cout<<"Kha";
	}else if (5<=dtb<6.5){
		cout<<"Trung binh";
	}else {
		cout<<"yeu";
	}
}
