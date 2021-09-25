#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;
class NhaCungCap{
private:
	char maNCC[10], tenNCC[20], diaChi[30], SDT[12];
public:
	void Nhap();
	void Xuat();
};
void NhaCungCap::Nhap(){
	cout<<"Nhap ma nha cung cap: "; fflush(stdin); gets(maNCC);
	cout<<"Nhap ten nha cung cap: "; fflush(stdin); gets(tenNCC);
	cout<<"Nhap dia chi: "; fflush(stdin); gets(diaChi);
	cout<<"Nhap so dien thoai: "; fflush(stdin); gets(SDT);
}
void NhaCungCap::Xuat(){
	cout<<left<<"Ma nha cung cap: "<<setw(30)<<maNCC<<"Ten nha cung cap: "<<tenNCC<<endl;
	cout<<left<<"Dia chi: "<<setw(38)<<diaChi<<"SDT: "<<SDT<<endl;
}
class SanPham{
private:
	char maSP[10], tenSP[15], tinhTrang[10];
	int soLuong;
	long donGia;
public:
	void Nhap();
	void Xuat();
	friend class Phieu;
};
void SanPham::Nhap(){
	cout<<"Nhap ma san pham: "; fflush(stdin); gets(maSP);
	cout<<"Nhap ten san pham: "; fflush(stdin); gets(tenSP);
	cout<<"Nhap tinh trang: "; fflush(stdin); gets(tinhTrang);
	cout<<"Nhap so luong: "; cin>>soLuong;
	cout<<"Nhap don gia: "; cin>>donGia;
}
void SanPham::Xuat(){
	cout<<left<<setw(10)<<maSP<<setw(15)<<tenSP<<setw(15)<<tinhTrang<<setw(10)<<soLuong<<setw(15)<<donGia<<setw(10)<<soLuong*donGia<<endl;
	
}
class Phieu{
private:
	char maPhieu[10];
	NhaCungCap x;
	SanPham *y;
	int n;
public:
	void Nhap();
	void Xuat();
};
void Phieu::Nhap(){
	cout<<"Nhap ma phieu: "; fflush(stdin); gets(maPhieu);
	x.Nhap();
	cout<<"Nhap so thiet bi: "; cin>>n;
	y = new SanPham[n];
	for(int i=0; i<n; i++){
		cout<<"\tNhap thiet bi thu "<<i+1<<endl;
		y[i].Nhap();
	}
}
void Phieu::Xuat(){
	cout<<"\nDai Hoc Cong Nghiep Ha Noi"<<endl;
	cout<<"\t\t\tPHIEU NHAP THIET BI MAY TINH"<<endl;
	cout<<"Ma phieu: "<<maPhieu<<endl;
	x.Xuat();
	cout<<left<<setw(10)<<"Ma SP"<<setw(15)<<"Ten san pham"<<setw(15)<<"Tinh trang"<<setw(10)<<"So luong"<<setw(15)<<"Don gia"<<setw(10)<<"Thanh tien"<<endl;
	long sum=0;
	for(int i=0; i<n; i++){
		y[i].Xuat();
		sum+=y[i].donGia*y[i].soLuong;
	}
	cout<<left<<"Tong so san pham: "<<setw(32)<<n<<"Tong so tien: "<<sum<<endl;
}
int main(){
	Phieu ph;
	ph.Nhap();
	ph.Xuat();
	return 0;
}
