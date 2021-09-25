#include <iostream>
#include <iomanip>
#include <string.h>
#include <stdlib.h>
using namespace std;
class Phieu;
class NhanVien{
private:
	char hoTen[30], chucVu[30];
public:
	void Nhap();
	void Xuat();
};
void NhanVien::Nhap(){
	cout<<"Nhap ten nhan vien: "; fflush(stdin); gets(hoTen);
	cout<<"Nhap chuc vu      : "; fflush(stdin); gets(chucVu);
}
void NhanVien::Xuat(){
	cout<<left<<setw(25)<<"Nhan vien kiem ke: "<<setw(25)<<hoTen<<setw(15)<<"Chuc vu: "<<setw(15)<<chucVu<<endl;
}
class Phong{
private:
	char tenPhong[30], maPhong[10], truongPhong[30];
public:
	void Nhap();
	void Xuat();
};
void Phong::Nhap(){
	cout<<"Nhap ten phong: "; fflush(stdin); gets(tenPhong);
	cout<<"Nhap ma phong: "; fflush(stdin); gets(maPhong);
	cout<<"Nhap ten truong phong: "; fflush(stdin); gets(truongPhong);
}
void Phong::Xuat(){
	cout<<left<<setw(25)<<"Kiem ke tai phong: "<<setw(25)<<tenPhong<<setw(15)<<"Ma phong: "<<setw(15)<<maPhong<<endl;
	cout<<left<<"Truong phong: "<<truongPhong<<endl;
}
class TaiSan{
private:
	char tenTS[30];
	int soLuong;
	char tinhTrang[25];
public:
	TaiSan();
	TaiSan(char tenTS[], int soLuong, char tinhTrang[]);
	//~TaiSan();
	void Nhap();
	void Xuat();
	friend class Phieu;
	friend void Sort(Phieu phieu);
	friend void Change(Phieu phieu);
};
TaiSan::TaiSan(){
	strcpy(this->tenTS, "");
	this->soLuong=0;
	strcpy(tinhTrang, "");
}
TaiSan::TaiSan(char tenTS[], int soLuong, char tinhTrang[]){
	strcpy(this->tenTS, tenTS);
	this->soLuong=soLuong;
	strcpy(this->tinhTrang, tinhTrang);
}
//TaiSan::~TaiSan(){
//	strcpy(this->tenTS, "");
//	this->soLuong=0;
//	strcpy(this->tinhTrang, "");
//}
void TaiSan::Nhap(){
	cout<<"Nhap ten tai san: "; fflush(stdin); gets(tenTS);
	cout<<"Nhap so luong   : "; cin>>soLuong;
	cout<<"Nhap tinh trang : "; fflush(stdin); gets(tinhTrang);
}
void TaiSan::Xuat(){
	cout<<left<<setw(30)<<tenTS<<setw(20)<<soLuong<<setw(30)<<tinhTrang<<endl;
}
class Phieu{
private:
	char maPhieu[7], ngay[15];
	NhanVien nhanvien;
	Phong phong;
	TaiSan *taisan;
	int n;
public:
	void Nhap();
	void Xuat();
	friend void Insert(Phieu &phieu, TaiSan x, int pos);
	friend void Sort(Phieu phieu);
	friend void Change(Phieu phieu);
};
void Phieu::Nhap(){
	cout<<"Nhap ma phieu: "; fflush(stdin); gets(maPhieu);
	cout<<"Nhap ngay kiem ke: "; fflush(stdin); gets(ngay);
	nhanvien.Nhap();
	phong.Nhap();
	cout<<"Nhap so luong tai san: "; cin>>n;
	taisan = new TaiSan[n];

	for(int i=0; i<n; i++){
		cout<<"\tNhap thong tin tai san thu "<<i+1<<":"<<endl;
		taisan[i].Nhap();
	}
}
void Phieu::Xuat(){
	cout<<"\t\t\tPHIEU KIEM KE TAI SAN"<<endl;
	cout<<left<<setw(25)<<"Ma phieu: "<<setw(25)<<maPhieu<<setw(15)<<"Ngay kiem ke: "<<setw(15)<<ngay<<endl;
	nhanvien.Xuat();
	phong.Xuat();
	cout<<left<<setw(30)<<"Ten tai san"<<setw(20)<<"So luong"<<setw(30)<<"Tinh trang"<<endl;
	int sum=0;
	for(int i=0; i<n; i++){
		taisan[i].Xuat();
		sum+=taisan[i].soLuong;
	}
	cout<<"So tai san da kiem ke: "<<setw(15)<<n<<"Tong so luong: "<<sum<<endl;
}
void Change(Phieu phieu){
	for(int i=0; i<phieu.n; i++){
		if(strcmp(phieu.taisan[i].tenTS, "May vi tinh")==0){
			phieu.taisan[i].soLuong = 20;
		}
	}
}
void Insert(Phieu &phieu, TaiSan x, int pos){
	phieu.taisan = (TaiSan*)realloc(phieu.taisan, (phieu.n+1)*sizeof(TaiSan));
	for(int i=phieu.n; i>=pos; i--){
		phieu.taisan[i] = phieu.taisan[i-1];
	}
	phieu.taisan[pos-1] = x;
	phieu.n++;
}
void Sort(Phieu phieu){
	for(int i=0; i<phieu.n-1; i++){
		for(int j=i+1; j<phieu.n; j++){
			if(phieu.taisan[i].soLuong>phieu.taisan[j].soLuong){
				TaiSan temp = phieu.taisan[i];
				phieu.taisan[i] = phieu.taisan[j];
				phieu.taisan[j] = temp;
			}
		}
	}
}
int main(){
	Phieu phieu;
	phieu.Nhap();
	cout<<"\n\n\tThong tin phieu: "<<endl;
	phieu.Xuat();
	cout<<"\n\t=================================================="<<endl;
	//Bonus1:
	Change(phieu);
	cout<<"\n\tPhieu sau khi thay doi: "<<endl;
	phieu.Xuat();
	cout<<"\n\t=================================================="<<endl;
	//Bonus2:
	TaiSan x((char*)"Laptop", 10, (char*)"Tot");
	//TaiSan x;
	//x.Nhap();
	Insert(phieu, x, 2);
	cout<<"\n\tPhieu sau khi chen: "<<endl;
	phieu.Xuat();
	cout<<"\n\t=================================================="<<endl;
	//Bonus3:
	Sort(phieu);
	cout<<"\n\tPhieu sau khi sap xep: "<<endl;
	phieu.Xuat();
}
