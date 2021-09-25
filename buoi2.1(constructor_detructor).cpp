#include <iostream>
#include <string.h>
using namespace std;
class SinhVien{
private:
	int maSV;
	char hoTen[30];
	int tuoi;
	double diemTB;
	bool gioiTinh;
public:
    SinhVien();//Ham khoi tao khong doi;(Default constructor);
    //SinhVien(int maSVNew, char hoTenNew[], int tuoiNew);
	SinhVien(int maSVNew, char hoTenNew[], int tuoiNew, double diemTBNew);//Ham khoi tao co doi-Day du;(Parameterized constructor);
	~SinhVien(){
		maSV=0;
		strcpy(hoTen, "";)
		tuoi=0;
		diemTB=0;
		
	}
	void Nhap();
	void Xuat();
};
SinhVien::SinhVien(){
	maSV=0;
	strcpy(hoTen, "");
	tuoi=0;
	diemTB=0;
}
SinhVien::SinhVien(int maSVNew, char hoTenNew[], int tuoiNew=19, double diemTBNew=0){
	maSV=maSVNew;
	strcpy(hoTen, hoTenNew);
	tuoi=tuoiNew;
	diemTB=diemTBNew;
}
//SinhVien::SinhVien(int maSVNew, char hoTenNew[], int tuoiNew){
//	maSV=maSVNew;
//	strcpy(hoTen, hoTenNew);
//	tuoi=tuoiNew;
//	
//}
void SinhVien::Nhap(){
	cout<<"Nhap ma sinh vien: "; cin>>maSV;
	cout<<"Nhap ten sinh vien: "; fflush(stdin); gets(hoTen);
	cout<<"Nhap tuoi sinh vien: "; cin>>tuoi;
	cout<<"Nhap diem sinh vien: "; cin>>diemTB;
}
void SinhVien::Xuat(){
	cout<<"Ma sinh vien: "<<maSV<<endl;
	cout<<"Ten sinh vien: "<<hoTen<<endl;
	cout<<"Tuoi sinh vien: "<<tuoi<<endl;
	cout<<"Diem sinh vien: "<<diemTB<<endl;
}
int main(){
	SinhVien svA;
	SinhVien svB(123, "B", 20, 8.7);
	SinhVien *a=new SinhVien;
	a->~SinhVien();//Doi tuong dong can phai goi ham huy;
	//hoac delete a;
	svA.Nhap();
	cout<<"Sinh vien A:"<<endl;
	svA.Xuat();
	cout<<"Sinh vien B:"<<endl;
	svB.Xuat();
	return 0;
}
