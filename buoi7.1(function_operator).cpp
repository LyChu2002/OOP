#include <iostream>
using namespace std;
/*
    1) Overloading:
    	1)function(ham)
    	2)operator(toan tu)
    2) Operator(toan tu)
        2.1. Toan tu 1 ngoi i++; i--; --i; ++i;
        2.2. Tooan tu 2 ngoi a+b...
        2.3. 
    Phuong thuc toan tu
    Tim Ucln;
*/
class PhanSo{
private:
	double a, b;
public:
	void Nhap();
	void Xuat();
	void Tang(); //tang tu mau len 1 don vi
	PhanSo operator ++();
	//Cong 2 phan so
	PhanSo operator+(PhanSo x);
	PhanSo operator-(PhanSo x);
	PhanSo operator/(PhanSo x);
	PhanSo operator*(PhanSo x);
	double operator--();
	friend istream &operator >> (istream &is, PhanSo &ps);
	friend ostream &operator << (ostream &os, PhanSo ps);
};
PhanSo PhanSo::operator-(PhanSo x){
	PhanSo c;
	c.a = this->a * x.b - this->b * x.a;
	c.b = this->b * x.b;
	return c;
}
PhanSo PhanSo::operator*(PhanSo x){
	PhanSo c;
	c.a = this->a * x.a;
	c.b = this->b * x.b;
	return c;
}
PhanSo PhanSo::operator/(PhanSo x){
	PhanSo c;
	c.a = this->a * x.b;
	c.b = this->b * x.a;
	return c;
}
double PhanSo::operator--(){
	return this->a/this->b;
}
PhanSo PhanSo::operator+(PhanSo x){
	PhanSo c;
	c.a = this->a * x.b + this->b * x.a;
	c.b = this->b * x.b;
	return c;
}
istream &operator >> (istream &is, PhanSo &ps){
	is >> ps.a;
	is >> ps.b;
	return is;//bat buoc
}
ostream &operator << (ostream &os, PhanSo ps){
	os << ps.a << "/" << ps.b << endl;
	return os;
}
void PhanSo::Nhap(){
	cin>>a>>b;
}
void PhanSo::Xuat(){
	cout<<a<<"/"<<b;
}
//void PhanSo::Tang(){
//	this->a++;
//	this->b++;
//}
PhanSo PhanSo::operator ++(){
	PhanSo x;
	x.a = ++this->a;
	x.b = ++this->b;
	return x;
	/*
	this->a++;
	this->b++;
	return *this;
	*/
}
int main(){
	PhanSo ps1, ps2;
	cout<<"Nhap ps1 = ";
	cin>>ps1;
	cout<<"Nhap ps2 = ";
	cin>>ps2;
	PhanSo ps3 = ps1+ps2;
	cout<<"ps3 = "<<ps3<<endl;
	PhanSo ps4 = ps1-ps2;
	cout<<"ps4 = "<<ps4<<endl;
	PhanSo ps5=ps1*ps2;
	cout<<"ps5 = "<<ps5<<endl;
	PhanSo ps6=ps1/ps2;
	cout<<"ps6 = "<<ps6<<endl;
	//cout<<++ps1;
	
//	ps1.Nhap();
//	++ps1;
//	ps1.Xuat();
//	cout<<"ps = "<<ps1;
//    cout<<++ps1;
	return 0;
}
