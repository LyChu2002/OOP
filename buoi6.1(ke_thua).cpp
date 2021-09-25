#include <iostream>
using namespace std;
class ConNguoi{
protected:
	char hoTen[30];
	char ngaySinh[30];
	char queQuan[30];
public:
	void Nhap();
	void Xuat();
};
void ConNguoi::Nhap(){
	cout<<"Nhap ho ten: "; fflush(stdin); gets(hoTen);
	cout<<"Nhap ngay sinh: "; fflush(stdin); gets(ngaySinh);
	cout<<"Nhap que quan: "; fflush(stdin); gets(queQuan);
}
void ConNguoi::Xuat(){
	cout<<"Ho ten: "<<hoTen<<endl;
	cout<<"Ngay sinh: "<<ngaySinh<<endl;
	cout<<"Que quan: "<<queQuan<<endl;
}
class SinhVien : public ConNguoi{
private:
	char tenTruong[30];
	char chuyenNganh[20];
	int maSV;
public:
	void Nhap();
	void Xuat();
};
void SinhVien::Nhap(){
	ConNguoi::Nhap();
	cout<<"Nhap ten truong: "; fflush(stdin); gets(tenTruong);
	cout<<"Nhap chuyen nganh: "; fflush(stdin); gets(chuyenNganh);
	cout<<"Nhap ma sinh vien: "; cin>>maSV;
}
void SinhVien::Xuat(){
	ConNguoi::Xuat();
	cout<<"Ten truong: "<<tenTruong<<endl;
	cout<<"Chuyen nganh: "<<chuyenNganh<<endl;
	cout<<"Ma sinh vien: "<<maSV<<endl;
}
int main(){
	SinhVien a;
	a.Nhap();
	a.Xuat();
	return 0;
}
