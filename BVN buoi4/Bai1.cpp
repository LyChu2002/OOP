#include <bits/stdc++.h>
using namespace std;
class Date{
private:
	int ngay, thang, nam;
public:
	void Nhap();
	void Xuat();
};
void Date::Nhap(){
	cout<<"Nhap ngay: "; cin>>this->ngay;
	cout<<"Nhap thang: "; cin>>this->thang;
	cout<<"Nhap nam: "; cin>>this->nam;
}
void Date::Xuat(){
	cout<<this->ngay<<"/"<<this->thang<<"/"<<this->nam<<endl;
}
class NhanSu{
private:
	char hoTen[30];
	int maNS;
	static int maTam;
	Date ngaySinh;
public:
	NhanSu();
	~NhanSu();
	void Nhap();
	void Xuat();
};
int NhanSu::maTam=0;
NhanSu::NhanSu(){
	this->maTam++;
	this->maNS=this->maTam;
	strcpy(this->hoTen, "");
}
NhanSu::~NhanSu(){
	this->maNS=0;
	strcpy(this->hoTen, "");
}
void NhanSu::Nhap(){
	cout << "Nhap ho va ten: "; fflush(stdin); gets(this->hoTen);
	ngaySinh.Nhap();
}
void NhanSu::Xuat(){
	cout << left <<setw(10) <<this->maNS<<setw(30)<<this->hoTen;
	ngaySinh.Xuat();
}
int main(){
	NhanSu *p;
	int num;
	cout<<"INPUT: "<<endl;
	cout<<"Nhap so nhan su cua cong ty: "; cin>>num;
	p = new NhanSu[num];
	for(int i=0; i<num; i++){
		cout<<"Nhan su "<<i+1<<":"<<endl;
		p[i].Nhap();
	}
	cout<<endl<<endl;
	cout<<"OUTPUT: "<<endl;
	cout<<left<<setw(10)<<"Ma NS"<<setw(30)<<"Ho ten"<<"Ngay sinh"<<endl;
	for(int i=1; i<num; i++){
		p[i].Xuat();
	}
	delete[] p;
	return 0;
}
