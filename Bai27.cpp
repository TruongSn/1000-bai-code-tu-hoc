#include <iostream>
#include <math.h>
using namespace std;
int main (){
	int songaycanchuyen,sonam,sothang,songay;
	cout<<"nhap so ngay: ";
	cin>>songaycanchuyen;
	if (songaycanchuyen>=0){
		sonam=songaycanchuyen/365;
		sothang=(songaycanchuyen%365)/30;
		songay=songaycanchuyen-(sonam*365+sothang*30);
		cout<<sonam<<" "<<sothang<<" "<<songay<<" ";
	}else {
		cout<<"nhap lai so ngay";
	}
	return 0;
}
