#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;
class Hang{
private:
	char tenHang[15];
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
	cout<<left<<setw(20)<<tenHang<<setw(20)<<donGia<<setw(20)<<soLuong<<setw(20)<<donGia*soLuong<<endl;
}
class Phieu{
private:
	char maPhieu[10], ngayLap[15];
	Hang *a;
	int n;
public:
	void Nhap();
	void Xuat();
};
void Phieu::Nhap(){
	cout<<"Nhap ma phieu: "; fflush(stdin); gets(maPhieu);
	cout<<"Nhap ngay lap: "; fflush(stdin); gets(ngayLap);
	cout<<"Nhap so hang: "; cin>>n;
	a = new Hang[n];
	for(int i=0; i<n; i++){
		cout<<"\tNhap mat hang thu "<<i+1<<endl;
		a[i].Nhap();
	}
}
void Phieu::Xuat(){
	cout<<"\t\t\tPHIEU MUA HANG"<<endl;
	cout<<right<<setw(10)<<"Ma phieu:"<<setw(5)<<maPhieu<<setw(25)<<"Ngay lap: "<<ngayLap<<endl;
	cout<<right<<setw(10)<<"Ten hang"<<setw(17)<<"Don gia"<<setw(20)<<"So luong"<<setw(20)<<"Thanh tien"<<endl;
	float sum=0;
	for(int i=0; i<n; i++){
		a[i].Xuat();
		sum+=a[i].donGia*a[i].soLuong;
	}
	cout<<right<<setw(50)<<"Cong thanh tien: "<<setw(15)<<sum<<endl;
}
int main(){
	Phieu ph;
	ph.Nhap();
	ph.Xuat();
	return 0;
}
