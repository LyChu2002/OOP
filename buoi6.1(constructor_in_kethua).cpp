#include <iostream>
#include <string.h>
using namespace std;
class Hinh{
protected:
	char vien[10];
	char mauSac[15];
public:
	//Hinh();
	Hinh(char *vien, char *mauSac);
	~Hinh(){}
};
Hinh::Hinh(char *vien, char *mauSac){
	strcpy(this->vien, vien);
	strcpy(this->mauSac, mauSac);
}
class HinhTron : public Hinh{
private:
	float BK;
public:
	HinhTron();
	HinhTron(float BK, char *vien, char *mauSac);
	~HinhTron(){}
	void Xuat();
};
HinhTron::HinhTron(float BK, char *vien, char *mauSac) : Hinh(vien, mauSac){
	this->BK = BK;
}
void HinhTron::Xuat(){
	cout<<"Ban kinh: "<<BK<<endl;
	cout<<"Vien: "<<vien<<endl;
	cout<<"Mau sac: "<<mauSac<<endl;
}
int main(){
	HinhTron H(5.1, (char *)"lien", (char *)"do");
	H.Xuat();
	return 0;
}
