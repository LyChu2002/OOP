#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;

class NSX{
private:
	char maNSX[30], tenNSX[30], diaChiNSX[30];
public:
	void Nhap();
	void Xuat();
};
void NSX::Nhap(){
	cout<<"Nhap ma nha san xuat: "; fflush(stdin); gets(maNSX);
	cout<<"Nhap ten nha san xuat: "; fflush(stdin); gets(tenNSX);
	cout<<"Nhap dia chi nha san xuat: "; fflush(stdin); gets(diaChiNSX);
}
void NSX::Xuat(){
	cout<<setw(20)<<left<<maNSX;
	cout<<setw(20)<<left<<tenNSX;
	cout<<setw(20)<<left<<diaChiNSX<<endl;
}
class Hang{
private:
	char maHang[30], tenHang[30];
	NSX x;
public:
	void Nhap();
	void Xuat();
};
void Hang::Nhap(){
	cout<<"Nhap ma hang: "; fflush(stdin); gets(maHang);
	cout<<"Nhap ten hang: "; fflush(stdin); gets(tenHang);
	x.Nhap();
}
void Hang::Xuat(){
	cout<<setw(20)<<left<<maHang;
	cout<<setw(20)<<left<<tenHang;
	x.Xuat();
}
int main(){
	int n;
	cout<<"Nhap so mat hang: "; cin>>n;
	Hang *a;
	a = new Hang[n];
	for(int i=0; i<n; i++){
		cout<<"\n\tNhap mat hang thu "<<i+1<<endl;
		a[i].Nhap();
	}
	cout<<setw(20)<<left<<"Ma hang";
	cout<<setw(20)<<left<<"Ten hang";
	cout<<setw(20)<<left<<"Ma NSX";
	cout<<setw(20)<<left<<"Ten NSX";
	cout<<setw(20)<<left<<"Dia chi NSX"<<endl;
	for(int i=0; i<n; i++){
		a[i].Xuat();
	}
	return 0;
}
