#include <iostream>
//tim so dao nguoc cua so nguyen duong n
using namespace std;
int main (){
   int n;
   int songhichdao=0;
   cout<<"nhap n: ";
   cin>>n;
   if (n>0){
   	 while (n!=0){
   	     int chusocuoicung=n%10;
   	 	 songhichdao = songhichdao*10+chusocuoicung;
   	 	 n=n/10;
		}
		cout<<"so nghich dao"<<songhichdao;
   }else {
   	cout<<"nhap lai n";
   }
return 0;	
}
