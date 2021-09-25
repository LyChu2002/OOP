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
    SinhVien();
	SinhVien(int maSV, char hoTen[], int tuoi, double diemTB);
	~SinhVien(){
		maSV=0;
		strcpy(hoTen, "");
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
SinhVien::SinhVien(int maSV, char hoTen[], int tuoi, double diemTB){
	this->maSV=maSV;
	strcpy(this->hoTen, hoTen);
	this->tuoi=tuoi;
	this->diemTB=diemTB;
}


void SinhVien::Xuat(){
	cout<<"Ma sinh vien: "<<maSV<<endl;
	cout<<"Ten sinh vien: "<<hoTen<<endl;
	cout<<"Tuoi sinh vien: "<<tuoi<<endl;
	cout<<"Diem sinh vien: "<<diemTB<<endl;
}
int main(){
	
	SinhVien svB(123, "B", 20, 8.7);
	

	cout<<"Sinh vien B:"<<endl;
	svB.Xuat();
	return 0;
}
