#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;
class DiaChi{
private:
	char so[5], ngo[5], pho[15], phuong[15], quan[20], thanhPho[15];
public:
	void Nhap();
	void Xuat();
};
void DiaChi::Nhap(){
	cout<<"Nhap so nha: "; fflush(stdin); gets(so);
	cout<<"Nhap ngo: "; fflush(stdin); gets(ngo);
	cout<<"Nhap pho: "; fflush(stdin); gets(pho);
	cout<<"Nhap phuong: "; fflush(stdin); gets(phuong);
	cout<<"Nhap quan: "; fflush(stdin); gets(quan);
	cout<<"Nhap thanh pho: "; fflush(stdin); gets(thanhPho);
}
void DiaChi::Xuat(){
	cout<<left<<setw(10)<<"Dia chi:"<<"So "<<so<<", "<<"ngo "<<ngo<<" Pho "<<pho<<", "<<"phuong "<<phuong<<", "<<"quan "<<quan<<", "<<thanhPho<<endl;
}
class Nguoi{
private:
	char hoTen[30], SDT[15];
	DiaChi x;
public:
	void Nhap();
	void Xuat();
};
void Nguoi::Nhap(){
	cout<<"Nhap ho ten nguoi di cho: "; fflush(stdin); gets(hoTen);
	cout<<"Nhap so dien thoai: "; fflush(stdin); gets(SDT);
	x.Nhap();
}
void Nguoi::Xuat(){
	cout<<left<<setw(10)<<"Ho va ten nguoi di cho: "<<hoTen<<endl;
	cout<<left<<setw(10)<<"So dien thoai: "<<SDT<<endl;
	x.Xuat();
}
class Hang{
private:
	char tenHang[15];
	int donGia, soLuong;
public:
	void Nhap();
	void Xuat();
	friend class Phieu;
};
void Hang::Nhap(){
	cout<<"Nhap ten hang: "; fflush(stdin); gets(tenHang);
	cout<<"Nhap don gia: "; cin>>donGia;
	cout<<"Nhap so luong: "; cin>>soLuong;
}
void Hang::Xuat(){
	cout<<left<<setw(20)<<tenHang<<setw(15)<<donGia<<setw(15)<<soLuong<<setw(20)<<donGia*soLuong<<endl;
}
class Phieu{
private:
	char maPhieu[5], ngay[15];
	Nguoi y;
	Hang *z;
	int n;
public:
	void Nhap();
	void Xuat();
};
void Phieu::Nhap(){
	cout<<"Nhap ma phieu: "; fflush(stdin); gets(maPhieu);
	cout<<"Nhap ngay: "; fflush(stdin); gets(ngay);
	y.Nhap();
	cout<<"Nhap so hang: "; cin>>n;
	z = new Hang[n];
	for(int i=0; i<n; i++){
		cout<<"\tNhap hang thu "<<i+1<<endl;
		z[i].Nhap();
	}
}
void Phieu::Xuat(){
	cout<<"\t\t\tPHIEU DI CHO"<<endl;
	cout<<left<<setw(10)<<"Ma phieu: "<<setw(20)<<maPhieu<<"Ngay: "<<ngay<<endl;
	y.Xuat();
	cout<<left<<setw(20)<<"Ten hang"<<setw(15)<<"Don gia"<<setw(15)<<"So luong"<<setw(20)<<"Thanh tien"<<endl;
	long sum=0;
	for(int i=0; i<n; i++){
		z[i].Xuat();
		sum+=z[i].soLuong*z[i].donGia;
	}
	cout<<right<<setw(50)<<"Cong thanh tien: "<<sum<<endl;
	cout<<"Luu y: Phieu chi co tac dung trong btvn buoi 4 cua lop OOP 2021!"<<endl;
}
int main(){
	Phieu ph;
	ph.Nhap();
	ph.Xuat();
	return 0;
}
