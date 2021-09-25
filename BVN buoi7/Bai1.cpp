#include <iostream>
using namespace std;
class SoPhuc{
private:
	double a, b;
public:
	SoPhuc();
	SoPhuc(double a, double b);
	~SoPhuc(){}
	friend ostream &operator<<(ostream &os, SoPhuc sp);
	SoPhuc operator+(SoPhuc x);
	SoPhuc operator-(SoPhuc x);
};
SoPhuc::SoPhuc(){
	this->a = 0;
	this->b = 0;
}
SoPhuc::SoPhuc(double a, double b){
	this->a = a;
	this->b = b;
}
ostream &operator<<(ostream &os, SoPhuc sp){
	os<<sp.a<<"+"<<"i"<<"*"<<sp.b;
	return os;
}
SoPhuc SoPhuc::operator+(SoPhuc x){
	SoPhuc c;
	c.a = this->a + x.a;
	c.b = this->b + x.b;
	return c;
}
SoPhuc SoPhuc::operator-(SoPhuc x){
	SoPhuc c;
	c.a = this->a - x.a;
	c.b = this->b - x.b;
	return c;
}
int main(){
	SoPhuc sp1(-3, 4);
	SoPhuc sp2(6.5, -7);
	SoPhuc sp3 = sp1+sp2;
	SoPhuc sp4 = sp1-sp2;
	cout<<sp1<<" + "<<sp2<<" = "<<sp3<<endl;
	cout<<sp1<<" - "<<sp2<<" = "<<sp4<<endl;
	return 0;
}
