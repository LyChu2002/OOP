#include <iostream>
using namespace std;
class TamThuc{
private:
	float a, b, c;
public:
	friend istream &operator>>(istream &is, TamThuc &tt);
	friend ostream &operator<<(ostream &os, TamThuc tt);
	TamThuc operator--();
	TamThuc operator+(TamThuc x);
	TamThuc operator-(TamThuc x);
};
istream &operator>>(istream &is, TamThuc &tt){
	cout<<"Nhap he so a: "; is>>tt.a;
	cout<<"Nhap he so b: "; is>>tt.b;
	cout<<"Nhap he so c: "; is>>tt.c;
	return is;
}
ostream &operator<<(ostream &os, TamThuc tt){
	//os<<tt.a<<"x2"<<"+"<<tt.b<<"x"<<"+"<<tt.c;
	os<<tt.a<<"x"<<char(253);
	if(tt.b>=0){
		os<<"+"<<tt.b<<"x";
	}
	else{
		os<<tt.b<<"x";
	}
	if(tt.c>=0){
		os<<"+"<<tt.c;
	}
	else{
		os<<tt.c;
	}
	return os;
}
TamThuc TamThuc::operator--(){
	this->a = -this->a;
	this->b = -this->b;
	this->c = -this->c;
	return *this;
}
TamThuc TamThuc::operator+(TamThuc x){
	TamThuc temp;
	temp.a = this->a + x.a;
	temp.b = this->b + x.b;
	temp.c = this->c + x.c;
	return temp;
}
TamThuc TamThuc::operator-(TamThuc x){
	TamThuc temp;
	temp.a = this->a - x.a;
	temp.b = this->b - x.b;
	temp.c = this->c - x.c;
	return temp;
}
int main(){
	TamThuc tt1, tt2;
	cout<<"\tNhap tam thuc 1: "<<endl;
	cin>>tt1;
	cout<<"\tNhap tam thuc 2: "<<endl;
	cin>>tt2;
	cout<<"\nTam thuc 1 sau dao dau: "<<--tt1<<endl;
	cout<<"Tam thuc 2 sau dao dau: "<<--tt2<<endl;
	TamThuc tt3=tt1+tt2;
	TamThuc tt4=tt1-tt2;
	cout<<"Tong 2 tam thuc: "<<tt3<<endl;
	cout<<"Hieu 2 tam thuc: "<<tt4<<endl;
	return 0;
}
