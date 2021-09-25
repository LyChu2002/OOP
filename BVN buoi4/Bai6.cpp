#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;
class SinhVien{
private:
	char maSV[10], hoTen[30], lop[10], khoa[5];
public:
	void Nhap();
	void Xuat();
};
void SinhVien::Nhap(){
	cout<<"Nhap ma sinh vien: "; fflush(stdin); gets(maSV);
	cout<<"Nhap ho ten sinh vien: "; fflush(stdin); gets(hoTen);
	cout<<"Nhap lop sinh vien: "; fflush(stdin); gets(lop);
	cout<<"Nhap khoa sinh vien: "; fflush(stdin); gets(khoa);
}
void SinhVien::Xuat(){
	cout<<left<<setw(10)<<"Ma sinh vien: "<<setw(14)<<maSV<<setw(5)<<"Ten sinh vien: "<<setw(20)<<hoTen<<endl;
	cout<<left<<setw(14)<<"Lop: "<<setw(14)<<lop<<setw(5)<<"Khoa:"<<setw(20)<<khoa<<endl;
}
class BangDiem{
private:
	char tenMon[30];
	int soTrinh;
	float diem;
public:
	void Nhap();
	void Xuat();
	friend class Phieu;
};
void BangDiem::Nhap(){
	cout<<"Nhap ten mon: "; fflush(stdin); gets(tenMon);
	cout<<"Nhap so trinh: "; cin>>soTrinh;
	cout<<"Nhap diem: "; cin>>diem;
}
void BangDiem::Xuat(){
	cout<<left<<setw(30)<<tenMon<<setw(30)<<soTrinh<<setw(20)<<diem<<endl;
}
class Phieu{
private:
	SinhVien x;
	BangDiem *y;
	int n;
public:
	void Nhap();
	void Xuat();
};
void Phieu::Nhap(){
	x.Nhap();
	cout<<"Nhap so mon: "; cin>>n;
	y = new BangDiem[n];
	for(int i=0; i<n; i++){
		cout<<"\tNhap mon thu "<<i+1<<endl;
		y[i].Nhap();
	}
}
void Phieu::Xuat(){
	cout<<"\t\t\tPHIEU BAO DIEM"<<endl;
	x.Xuat();
	cout<<"Bang diem: "<<endl;
	cout<<right<<setw(10)<<"Ten mon"<<setw(25)<<"So trinh"<<setw(28)<<"Diem"<<endl;
	int cnt=0, sum=0;
	for(int i=0; i<n; i++){
		y[i].Xuat();
		cnt+=y[i].soTrinh;
		sum+=y[i].soTrinh*y[i].diem;
	}
	cout<<right<<setw(55)<<"Diem trung binh: "<<(float)sum/cnt<<endl;
}
int main(){
	Phieu ph;
	ph.Nhap();
	ph.Xuat();
	return 0;
}
