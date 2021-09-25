#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;
class SinhVien{
private:
	char maSV[20];
	char hoTen[30];
	char ngaySinh[15];
	char gioiTinh[5];
	double dtb;
	char daoDuc[15];
public:
	SinhVien();
	SinhVien(char *maSV, char *hoTen, char *ngaySinh, char *gioiTinh, double dtb, char *daoDuc);
	~SinhVien();
	//GETTER:
	char *getMaSV(){
		return maSV;
	}
	char *getHoTen(){
		return hoTen;
	}
	char *getNgaySinh(){
		return ngaySinh;
	}
	char *getGioiTinh(){
		return gioiTinh;
	}
	double getDTB(){
		return dtb;
	}
	char *getDaoDuc(){
		return daoDuc;
	}
	//SETTER:
	void setMaSV(char *maSV){
		strcpy(this->maSV, maSV);
	}
	void setHoTen(char *hoTen){
		strcpy(this->hoTen, hoTen);
	}
	void setNgaySinh(char *ngaySinh){
		strcpy(this->ngaySinh, ngaySinh);
	}
	void setGioiTinh(char *gioiTinh){
		strcpy(this->gioiTinh, gioiTinh);
	}
	void setDTB(double dtb){
		this->dtb = dtb;
	}
	void setDaoDuc(char *daoDuc){
		strcpy(this->daoDuc, daoDuc);
	}
	friend void Nhap(SinhVien &a);
	friend void Xuat(SinhVien a);
};
SinhVien::SinhVien(){
	strcpy(this->maSV, "");
	strcpy(this->hoTen, "");
	strcpy(this->ngaySinh, "");
	strcpy(this->gioiTinh, "");
	this->dtb = 0;
	strcpy(this->daoDuc, "");
}
SinhVien::SinhVien(char *maSV, char *hoTen, char *ngaySinh, char *gioiTinh, double dtb, char *daoDuc){
	strcpy(this->maSV, maSV);
	strcpy(this->hoTen, hoTen);
	strcpy(this->ngaySinh, ngaySinh);
	strcpy(this->gioiTinh, gioiTinh);
	this->dtb = dtb;
	strcpy(this->daoDuc, daoDuc);
}
SinhVien::~SinhVien(){
	strcpy(this->maSV, "");
	strcpy(this->hoTen, "");
	strcpy(this->ngaySinh, "");
	strcpy(this->gioiTinh, "");
	this->dtb = 0;
	strcpy(this->daoDuc, "");
}
void Nhap(SinhVien &a){
	char maSVTemp[20];
	char hoTenTemp[30];
	char ngaySinhTemp[15];
	char gioiTinhTemp[5];
	double dtbTemp;
	char daoDucTemp[15];
	cout<<"Nhap ma sinh vien: "; fflush(stdin); gets(maSVTemp); a.setMaSV(maSVTemp);
	cout<<"Nhap ho ten sinh vien: "; fflush(stdin); gets(hoTenTemp); a.setHoTen(hoTenTemp);
	cout<<"Nhap ngay sinh: "; fflush(stdin); gets(ngaySinhTemp); a.setNgaySinh(ngaySinhTemp);
	cout<<"Nhap gioi tinh: "; fflush(stdin); gets(gioiTinhTemp); a.setGioiTinh(gioiTinhTemp);
	cout<<"Nhap diem trung binh: "; cin>>dtbTemp; a.setDTB(dtbTemp);
	cout<<"Nhap xep loai dao duc: "; fflush(stdin); gets(daoDucTemp); a.setDaoDuc(daoDucTemp);
}
void Xuat(SinhVien a){
	cout<<left<<setw(20)<<a.getMaSV()<<setw(30)<<a.getHoTen()<<setw(20)<<a.getNgaySinh()<<setw(15)<<a.getGioiTinh()<<setw(10)<<a.getDTB()<<setw(20)<<a.getDaoDuc()<<endl;
}
void TieuDe(){
	cout<<left<<setw(20)<<"Ma sinh vien"<<setw(30)<<"Ho ten"<<setw(20)<<"Ngay sinh"<<setw(15)<<"Gioi tinh"<<setw(10)<<"DTB"<<setw(20)<<"Dao duc"<<endl;
}
void XepLoai(SinhVien *a, int n){
	for(int i=0; i<n; i++){
		if(strcmp(a[i].getDaoDuc(), "Tot")==0){
			Xuat(a[i]);
		}
	}
}
int main(){
	int n;
	cout << "Nhap so sinh vien: "; cin>>n;
	SinhVien *sinhvien;
	sinhvien = new SinhVien[n];
	for(int i=0; i<n; i++){
		cout<<"\tNhap sinh vien thu "<<i+1<<":"<<endl;
		Nhap(sinhvien[i]);
	}
	TieuDe();
	for(int i=0; i<n; i++){
		Xuat(sinhvien[i]);
	}
	cout<<"\n\n\tDanh sach sinh vien xep loai dao duc tot:"<<endl;
	TieuDe();
	XepLoai(sinhvien, n);
}
