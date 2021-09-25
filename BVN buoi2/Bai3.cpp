#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;
class Hang{
private:
	char maHang[30];
	char tenHang[30];
	int ngayNhap;
	char nhaSanXuat[30];
	int donGia;
	int soLuong;
public:
	void Nhap();
	void Xuat();
	Hang();
	Hang(char maHangNew[], char tenHangNew[], int ngayNhapNew, char nhaSanXuatNew[], int donGiaNew, int soLuongNew);
	~Hang();
};
void Hang::Nhap(){
	cout<<"Nhap ma hang: "; fflush(stdin); gets(maHang);
	cout<<"Nhap ten hang: "; fflush(stdin); gets(tenHang);
	cout<<"Nhap ngay nhap: "; cin>>ngayNhap;
	cout<<"Nhap nha san xuat: "; fflush(stdin); gets(nhaSanXuat);
	cout<<"Nhap don gia: "; cin>>donGia;
	cout<<"Nhap so luong: "; cin>>soLuong;
}
void Hang::Xuat(){
	cout<<setw(15)<<left<<maHang;
	cout<<setw(20)<<left<<tenHang;
	cout<<setw(15)<<left<<ngayNhap;
	cout<<setw(20)<<left<<nhaSanXuat;
	cout<<setw(15)<<left<<donGia;
	cout<<setw(15)<<left<<soLuong;
	cout<<setw(15)<<left<<donGia*soLuong<<endl;
}
Hang::Hang(){
	strcpy(maHang, "");
	strcpy(tenHang, "");
	ngayNhap=0;
	strcpy(nhaSanXuat, "");
	donGia=0;
	soLuong=0;
}
Hang::Hang(char maHangNew[], char tenHangNew[], int ngayNhapNew, char nhaSanXuatNew[], int donGiaNew, int soLuongNew){
	strcpy(maHang, maHangNew);
	strcpy(tenHang, tenHangNew);
	ngayNhap=ngayNhapNew;
	strcpy(nhaSanXuat, nhaSanXuatNew);
	donGia=donGiaNew;
	soLuong=soLuongNew;
}
Hang::~Hang(){
	strcpy(maHang, "");
	strcpy(tenHang, "");
	ngayNhap=0;
	strcpy(nhaSanXuat, "");
	donGia=0;
	soLuong=0;
}
int main(){
	Hang P;
	cout<<"Nhap thong tin san pham: "<<endl;
	P.Nhap();
	cout<<setw(15)<<left<<"Ma hang";
	cout<<setw(20)<<left<<"Ten hang";
	cout<<setw(15)<<left<<"Ngay nhap";
	cout<<setw(20)<<left<<"Nha san xuat";
	cout<<setw(15)<<left<<"Don gia";
	cout<<setw(15)<<left<<"So luong";
	cout<<setw(15)<<left<<"Thanh tien"<<endl;
	Hang Q("23GH", "But", 12, "VN", 3000, 12);
    P.Xuat();
    Q.Xuat();
	return 0;
}
