#include <iostream>
#include <string.h>
using namespace std;
class Electronic{
protected:
	double congSuat;
	double dienAp;
public:
	Electronic(double congSuat, double dienAp);
	~Electronic(){}
};
Electronic::Electronic(double congSuat, double dienAp){
	this->congSuat = congSuat;
	this->dienAp = dienAp;
}
class MayGiat : public Electronic{
private:
	double dungTich;
	char loai[15];
public:
	MayGiat(double congSuat, double dienAp, double dungTich, char *loai);
	~MayGiat(){}
	void Xuat();
};
MayGiat::MayGiat(double congSuat, double dienAp, double dungTich, char *loai) : Electronic(congSuat, dienAp){
	this->dungTich = dungTich;
	strcpy(this->loai, loai);
}
void MayGiat::Xuat(){
	cout<<"Cong suat: "<<congSuat<<endl;
	cout<<"Dien ap: "<<dienAp<<endl;
	cout<<"Dung tich: "<<dungTich<<endl;
	cout<<"Loai: "<<loai<<endl;
}
class TuLanh : public Electronic{
private:
	double dungTich;
	int soNgan;
public:
	TuLanh(double congSuat, double dienAp, double dungTich, int soNgan);
	~TuLanh(){}
	void Xuat();
};
TuLanh::TuLanh(double congSuat, double dienAp, double dungTich, int soNgan) : Electronic(congSuat, dienAp){
	this->dungTich = dungTich;
	this->soNgan = soNgan;
}
void TuLanh::Xuat(){
	cout<<"Cong suat: "<<congSuat<<endl;
	cout<<"Dien ap: "<<dienAp<<endl;
	cout<<"Dung tich: "<<dungTich<<endl;
	cout<<"So ngan: "<<soNgan<<endl;
}
int main(){
	MayGiat a(200, 220, 5.6, (char *)"Cua tren");
	cout<<"\tThong tin may giat: "<<endl;
	a.Xuat();
	cout<<"\tThong tin tu lanh: "<<endl;
	TuLanh b(150, 220, 16, 6);
	b.Xuat();
	return 0;
}
