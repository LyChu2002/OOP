#include <iostream>
#include <string.h>
using namespace std;
class NSX{
private:
	char tenNSX[30];
	char diaChi[30];
public:
	void Nhap();
	void Xuat();
};
void NSX::Nhap(){
	cout<<"Nhap ten nha san xuat: "; fflush(stdin); gets(tenNSX);
	cout<<"Nhap dia chi: "; fflush(stdin); gets(diaChi);
}
void NSX::Xuat(){
	cout<<"Ten nha san xuat: "<<tenNSX<<endl;
	cout<<"Dia chi NSX: "<<diaChi<<endl;
}
class Hang{
protected:
	char tenHang[15];
	NSX x;
	double donGia;
public:
	Hang();
	~Hang();
	void Nhap();
	void Xuat();
};
Hang::Hang(){
	strcpy(this->tenHang, "");
	this->donGia = 0;
}
Hang::~Hang(){
	strcpy(this->tenHang, "");
	this->donGia = 0;
}
void Hang::Nhap(){
	cout<<"Nhap ten hang: "; fflush(stdin); gets(tenHang);
	x.Nhap();
	cout<<"Nhap don gia: "; cin>>donGia;
}
void Hang::Xuat(){
	cout<<"Ten hang: "<<tenHang<<endl;
	x.Xuat();
	cout<<"Don gia: "<<donGia<<endl;
}
class Date{
private:
	int ngay;
	int thang;
	int nam;
public:
	void Nhap();
	void Xuat();
};
void Date::Nhap(){
	cout<<"Nhap ngay: "; cin>>ngay;
	cout<<"Nhap thang: "; cin>>thang;
	cout<<"Nhap nam: "; cin>>nam;
}
void Date::Xuat(){
	cout<<"Ngay nhap: "<<ngay<<"/"<<thang<<"/"<<nam<<endl;
}
class Tivi : public Hang{
private:
	double kichThuoc;
	Date ngayNhap;
public:
	Tivi();
	~Tivi();
	void Nhap();
	void Xuat();
};
Tivi::Tivi(){
	this->kichThuoc = 0;
}
Tivi::~Tivi(){
	this->kichThuoc = 0;
}
void Tivi::Nhap(){
	Hang::Nhap();
	cout<<"Nhap kich thuoc: "; cin>>kichThuoc;
	ngayNhap.Nhap();
}
void Tivi::Xuat(){
	Hang::Xuat();
	cout<<"Kich thuoc: "<<kichThuoc<<endl;
	ngayNhap.Xuat();
}
int main(){
	Tivi tv;
	cout<<"\tNhap thong tin tivi: "<<endl;
	tv.Nhap();
	cout<<"\tThong tin cua tivi: "<<endl;
	tv.Xuat();
	return 0;
}
