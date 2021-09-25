#include <iostream>
#include <math.h>
using namespace std;
class HinhTron{
public:
	float ban_kinh;
	float chu_vi();
	float dien_tich();
};
float HinhTron::chu_vi(){
	return 2*M_PI*ban_kinh;
}
float HinhTron::dien_tich(){
	return M_PI*pow(ban_kinh, 2);
}
int main(){
	HinhTron a;
	cout<<"Nhap ban kinh: "; cin>>a.ban_kinh;
	cout<<"Chu vi= "<<a.chu_vi()<<endl;
	cout<<"Dien tich= "<<a.dien_tich()<<endl;
	return 0;
}
