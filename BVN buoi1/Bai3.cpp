#include <iostream>
#include <string.h>
using namespace std;
class CanBo{
public:
	char macb[30];
	char hoten[30];
	int ngaysinh;
	int ngaylv;
	void Nhap();
	long TinhLuong();
	void Xuat();
};
void CanBo::Nhap(){
	cout<<"Nhap ma: "; gets(macb);
	cout<<"Nhap ho ten: "; gets(hoten);
	cout<<"Nhap ngay sinh: "; cin>>ngaysinh;
	cout<<"Nhap so ngay lam viec: "; cin>>ngaylv;
}
long CanBo::TinhLuong(){
	return ngaylv*250000;
}
void CanBo::Xuat(){
	cout<<"Ma can bo: "<<macb<<endl;
	cout<<"Ho ten: "<<hoten<<endl;
	cout<<"Ngay sinh: "<<ngaysinh<<endl;
	cout<<"So ngay lam viec: "<<ngaylv<<endl;
	cout<<"Luong: "; cout<<TinhLuong();
}

int main(){
	CanBo cb;
	cb.Nhap();
	cb.Xuat();
	return 0;
}
