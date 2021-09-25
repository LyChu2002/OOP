#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;
class NCC{
private:
	char maNCC[10], tenNCC[20], diaChi[30];
public:
	void Nhap();
	void Xuat();
};
void NCC::Nhap(){
	cout<<"Nhap ma NCC: "; fflush(stdin); gets(maNCC);
	cout<<"Nhap ten NCC: "; fflush(stdin); gets(tenNCC);
	cout<<"Nhap dia chi: "; fflush(stdin); gets(diaChi);
}
void NCC::Xuat(){
	cout<<left<<setw(10)<<"Ma NCC: "<<setw(20)<<maNCC<<setw(10)<<"Ten NCC: "<<setw(20)<<tenNCC<<endl;
	cout<<left<<setw(10)<<"Dia chi: "<<diaChi<<endl;
}
class Hang{
private:
	char tenHang[10];
	float donGia;
	int soLuong;
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
	cout<<left<<setw(15)<<tenHang<<setw(15)<<donGia<<setw(15)<<soLuong<<setw(15)<<donGia*soLuong<<endl;
}
class Phieu{
private:
	char maPhieu[10], ngayLap[10];
	NCC x;
	Hang *y;
	int n;
public:
	void Nhap();
	void Xuat();
};
void Phieu::Nhap(){
	cout<<"Nhap ma phieu: "; fflush(stdin); gets(maPhieu);
	cout<<"Nhap ngay lap: "; fflush(stdin); gets(ngayLap);
	x.Nhap();
	cout<<"Nhap so hang: "; cin>>n;
	y = new Hang[n];
	for(int i=0; i<n; i++){
		cout<<"\tNhap mat hang thu "<<i+1<<endl;
		y[i].Nhap();
	}
}
void Phieu::Xuat(){
	cout<<"\n\t\t\tPHIEU NHAP HANG"<<endl;
	cout<<left<<setw(10)<<"Ma phieu: "<<setw(20)<<maPhieu<<setw(10)<<"Ngay lap: "<<setw(20)<<ngayLap<<endl;
	x.Xuat();
	cout<<left<<setw(15)<<"Ten hang"<<setw(15)<<"Don gia"<<setw(15)<<"So luong"<<setw(15)<<"Thanh tien"<<endl;
	float sum=0;
	for(int i=0; i<n; i++){
		y[i].Xuat();
		sum+=y[i].donGia*y[i].soLuong;
	}
	cout<<right<<setw(45)<<"Cong thanh tien: "<<sum<<endl;
}
int main(){
	Phieu ph;
	ph.Nhap();
	ph.Xuat();
	return 0;
}
