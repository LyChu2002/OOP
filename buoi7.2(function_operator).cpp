#include <iostream>
using namespace std;
class PhanSo{
private:
	int tu, mau;
public:
//	void Nhap();
//	void Xuat();
    friend istream &operator>>(istream &is, PhanSo &ps);
    friend ostream &operator<<(ostream &os, PhanSo ps);
	PhanSo operator+(PhanSo x);
	void RutGonPS();
};
//void PhanSo::Nhap(){
//	cout<<"Nhap tu so: "; cin>>this->tu;
//	cout<<"Nhap mau so: "; cin>>this->mau;
//}
//void PhanSo::Xuat(){
//	cout<<this->tu<<"/"<<this->mau<<endl;
//}
istream &operator>>(istream &is, PhanSo &ps){
	cout<<"Nhap tu so: "; is>>ps.tu;
	cout<<"Nhap mau so: "; is>>ps.mau;
	return is;
}
ostream &operator<<(ostream &os, PhanSo ps){
	os<<ps.tu<<"/"<<ps.mau<<endl;
	return os;
}
PhanSo PhanSo::operator+(PhanSo x){
	PhanSo c;
	c.tu = this->tu * x.mau + this->mau * x.tu;
	c.mau = this->mau * x.mau;
	return c;
}
int gcd(int a, int b){
	if(a%b==0){
		return b;
	}
	else{
		return gcd(b, a%b);
	}
}
void PhanSo::RutGonPS(){
	this->tu/= gcd(this->tu, this->mau);
	this->mau/=gcd(this->tu, this->mau);
}
int main(){
//	PhanSo a, b;
//	a.Nhap();
//	b.Nhap();
//	PhanSo c;
//	c = a+b;
//	c.Xuat();
    PhanSo ps1, ps2;
    cin>>ps1;
    cin>>ps2;
    PhanSo ps3=ps1+ps2;
    ps3.RutGonPS();
    cout<<ps3;
	return 0;
}
