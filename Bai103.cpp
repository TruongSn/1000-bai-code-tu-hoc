#include <iostream>
//nhap mot ngay, tim ngay truoc ngay vua nhap
using namespace std;
	bool namnhuan (int nam){
		if (nam%4==0 && nam%100!=0 || nam%400==0){
			return true;
		}
		return false;
	}
	
	int timsongaytrongthang (int thang, int nam){
		int ngaytrongthang;
		switch (thang) {
			case 1 : case 3 :case 5 : case 7: case 8 :case 10:case 12:
				ngaytrongthang = 31; 
				break;
			case 4 : case 6 : case 9 : case 11:
				ngaytrongthang=30;
				break;
			case 2 : 
			    if (namnhuan){
			    	ngaytrongthang=29;
				}else{
					ngaytrongthang=28;
				}
				break ;
			default :
				cout<<"nhap lai";
		}
		return ngaytrongthang;
	}
	
	void timngaytruoc (int ngay, int thang, int nam){
		int ngaytrongthang = timsongaytrongthang (thang,nam);
		  if (ngay==1){
		 	ngay=ngaytrongthang ;
		 	if (thang==1){
		 		thang=12;
		 		nam--;
			 }else {
			 	thang --;
			 }
		 }else {
		 	ngay--;
		 }
		cout<<ngay<<"/"<<thang<<"/"<<nam;
	}
	
    int main() {
    int ngay, thang, nam;
    do {
        cout << "nhap nam: ";
        cin >> nam;
        if (nam < 0) {
            cout << "nhap lai";
        }
    } while (nam < 0);

    do {
        cout << "nhap thang: ";
        cin >> thang;
        if (thang < 1 || thang > 12) {
            cout << "nhap lai";
        }
    } while (thang < 1 || thang > 12);

    int ngaytrongthang = timsongaytrongthang(thang, nam);
    do {
        cout << "nhap ngay: ";
        cin >> ngay;
        if (ngay < 1 || ngay > ngaytrongthang) {
            cout << "nhap lai";
        }
    } while (ngay < 1 || ngay > ngaytrongthang);

    timngaytruoc(ngay, thang, nam);
    return 0;
}
