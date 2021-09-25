#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;
class TaiSan{
private:
	char tenTS[20];
	int soLuong;
	char tinhTrang[30];
public:
	void Nhap();
	void Xuat();
	friend class Phieu;
};
void TaiSan::Nhap(){
	cout<<"Nhap ten tai san: "; fflush(stdin); gets(tenTS);
	cout<<"Nhap so luong   : "; cin>>soLuong;
	cout<<"Nhap tinh trang : "; fflush(stdin); gets(tinhTrang);
}
void TaiSan::Xuat(){
	cout<<left<<setw(20)<<tenTS<<setw(12)<<soLuong<<setw(10)<<tinhTrang<<endl;
}
class NhanVien{
private:
	char hoTen[30];
	char chucVu[15];
public:
	void Nhap();
	void Xuat();
};
void NhanVien::Nhap(){
	cout<<"Nhap ten nhan vien : "; fflush(stdin); gets(hoTen);
	cout<<"Nhap chuc vu: "; fflush(stdin); gets(chucVu);
}
void NhanVien::Xuat(){
	cout<<left<<setw(20)<<"Nhan vien kiem ke: "<<setw(30)<<hoTen<<setw(15)<<"Chuc vu: "<<setw(20)<<chucVu<<endl;
}
class Phong{
private:
	char maPhong[12], tenPhong[30], tenTP[30];
public:
	void Nhap();
	void Xuat();
};
void Phong::Nhap(){
	cout<<"Nhap ma phong        : "; fflush(stdin); gets(maPhong);
	cout<<"Nhap ten phong       : "; fflush(stdin); gets(tenPhong);
	cout<<"Nhap ten truong phong: "; fflush(stdin); gets(tenTP);
}
void Phong::Xuat(){
	cout<<left<<setw(20)<<"Kiem ke tai phong: "<<setw(30)<<tenPhong<<setw(15)<<"Ma phong: "<<setw(20)<<maPhong<<endl;
	cout<<left<<setw(20)<<"Truong phong: "<<setw(30)<<tenTP<<endl;
}
class Phieu{
private:
	char maPhieu[15], ngay[15];
	NhanVien x;
	Phong y;
	TaiSan *z;
	int n;
public:
	void Nhap();
	void Xuat();
};
void Phieu::Nhap(){
	cout<<"Nhap ma phieu: "; fflush(stdin); gets(maPhieu);
	cout<<"Nhap ngay: "; fflush(stdin); gets(ngay);
	x.Nhap();
	y.Nhap();
	cout<<"Nhap so tai san: "; cin>>n;
	z = new TaiSan[n];
	for(int i=0; i<n; i++){
		cout<<"\tNhap tai san thu "<<i+1<<endl;
		z[i].Nhap();
	}
}
void Phieu::Xuat(){
	cout<<"\n\t\t\tPHIEU KIEM KE TAI SAN "<<endl;
	cout<<left<<setw(20)<<"Ma phieu: "<<setw(30)<<maPhieu<<setw(15)<<"Ngay kiem ke"<<setw(20)<<ngay<<endl;
	x.Xuat();
	y.Xuat();
	cout<<endl;
	int sum=0;
	cout<<left<<setw(20)<<"Ten tai san"<<setw(12)<<"So luong"<<setw(10)<<"Tinh trang"<<endl;
	for(int i=0; i<n; i++){
		z[i].Xuat();
		sum+=z[i].soLuong;
	}
	cout<<left<<"So tai san da kiem ke: "<<setw(10)<<n<<"Tong so luong: "<<sum<<endl;
}
int main(){
	Phieu ph;
	ph.Nhap();
	ph.Xuat();
	return 0;
}
