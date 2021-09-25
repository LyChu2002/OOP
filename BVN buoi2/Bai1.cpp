#include <iostream>
#include <math.h>
using namespace std;
class PTBac2{
private:
	float a, b, c;
public:
	void Nhap();
	void Xuat();
	void Giai();
	PTBac2();
	PTBac2(float aNew, float bNew, float cNew);
	~PTBac2();
};
void PTBac2::Nhap(){
	cout<<"Nhap a: "; cin>>a;
	cout<<"Nhap b: "; cin>>b;
	cout<<"Nhap c: "; cin>>c;
}
void PTBac2::Xuat(){
	cout<<a<<"x2"<<"+"<<b<<"x"<<"+"<<c<<"=0"<<endl;
}
void PTBac2::Giai(){
	if(a==0){
		cout<<"Khong phai phuong trinh bac 2"<<endl;
	}
	else{
	    float delta=pow(b, 2)-4*a*c;
	    if(delta<0){
		    cout<<"Phuong trinh vo nghiem"<<endl;
	    }
	    else if(delta==0){
		    cout<<"Phuong trinh co nghiem kep: x1=x2="<<-b/(2*a)<<endl;
	    }
	    else{
		    cout<<"Phuong trinh co 2 nghiem phan biet: "<<endl;
		    cout<<"x1="<<(-b-sqrt(delta))/(2*a)<<endl;
		    cout<<"x2="<<(-b+sqrt(delta))/(2*a)<<endl;
	    }
    }
}
PTBac2::PTBac2(){
	a=0;
	b=0;
	c=0;
}
PTBac2::PTBac2(float aNew, float bNew, float cNew){
	a=aNew;
	b=bNew;
	c=cNew;
}
PTBac2::~PTBac2(){
	a=0;
	b=0;
	c=0;
}
int main(){
	PTBac2 P(3.4, 78.9, -12);
	cout<<"Phuong trinh P: ";
	P.Xuat();
	P.Giai();
	cout<<endl;
	PTBac2 Q;
	cout<<"Nhap phuong trinh Q: "<<endl;
	Q.Nhap();
	cout<<"Phuong trinh Q: ";
	Q.Xuat();
	Q.Giai();
	return 0;
}






