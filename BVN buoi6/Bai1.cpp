#include <iostream>
using namespace std;
class Vehicle{
protected:
	char nhanHieu[20];
	int namSX;
	char hang[20];
public:
	void Nhap();
	void Xuat();
};
void Vehicle::Nhap(){
	cout<<"Nhap nhan hieu: "; fflush(stdin); gets(nhanHieu);
	cout<<"Nhap nam san xuat: "; cin>>namSX;
	cout<<"Nhap hang: "; fflush(stdin); gets(hang);
}
void Vehicle::Xuat(){
	cout<<"Nhan hieu: "<<nhanHieu<<endl;
	cout<<"Nam san xuat: "<<namSX<<endl;
	cout<<"Hang: "<<hang<<endl;
}
class OTo : public Vehicle{
private:
	int soChoNgoi;
	double dungTich;
public:
	void Nhap();
	void Xuat();
};
void OTo::Nhap(){
	Vehicle::Nhap();
	cout<<"Nhap so cho ngoi: "; cin>>soChoNgoi;
	cout<<"Nhap dung tich: "; cin>>dungTich;
}
void OTo::Xuat(){
	Vehicle::Xuat();
	cout<<"So cho ngoi: "<<soChoNgoi<<endl;
	cout<<"Dung tich: "<<dungTich<<endl;
}
class Moto : public Vehicle{
private:
	double phanKhoi;
public:
	void Nhap();
	void Xuat();
};
void Moto::Nhap(){
	Vehicle::Nhap();
	cout<<"Nhap phan khoi: "; cin>>phanKhoi;
}
void Moto::Xuat(){
	Vehicle::Xuat();
	cout<<"Phan khoi: "<<phanKhoi<<endl;
}
int main(){
	OTo oto;
	cout<<"\tNhap thong tin xe oto: "<<endl;
	oto.Nhap();
	cout<<"\tThong tin xe oto: "<<endl;
	oto.Xuat();
	Moto moto;
	cout<<"\tNhap thong tin xe moto: "<<endl;
	moto.Nhap();
	cout<<"\tThong tin xe moto: "<<endl;
	moto.Xuat();
	return 0;
}
