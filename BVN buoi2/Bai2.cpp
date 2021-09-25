#include <iostream>
using namespace std;
class PhanSo{
private:
	int a, b;
public:
	void Nhap();
	void Xuat();
	void Rut();
	PhanSo();
	PhanSo(int aNew, int bNew);
	~PhanSo();
};
void PhanSo::Nhap(){
	cout<<"Nhap tu so: "; cin>>a;
	cout<<"Nhap mau so: "; cin>>b;
}
void PhanSo::Xuat(){
	cout<<a<<"/"<<b<<endl;
}
PhanSo::PhanSo(){
	a=b=0;
}
PhanSo::PhanSo(int aNew, int bNew){
	a=aNew;
	b=bNew;
}
PhanSo::~PhanSo(){
	a=0;
	b=0;
}
int UCLN(int m, int n){
	if(n==0){
		return m;
	}
	else{
		return UCLN(n, m%n);
	}
}
void PhanSo::Rut(){
	cout<<"Phan so rut gon: ";
	int tuSo=a/UCLN(a, b);
	int mauSo=b/UCLN(a, b);
	if(tuSo%mauSo==0){
		cout<<tuSo;
	}
	else{
		cout<<tuSo<<"/"<<mauSo;
	}
}
int main(){
	PhanSo P(2, 4);
	cout<<"Phan so P: "; 
	P.Xuat();
	P.Rut();
	cout<<endl;
	PhanSo Q;
	cout<<"Nhap phan so Q: "<<endl;
	Q.Nhap();
	cout<<"Phan so Q: ";
	Q.Xuat();
	Q.Rut();
	return 0;
}
