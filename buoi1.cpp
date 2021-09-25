#include<iostream>
#include <string.h>
using namespace std;
class Nguoi{
public:
	char name[30];
	int age;
	char address[30];
	float diemToan, diemLy, diemHoa;
	void Nhap();
	void Xuat();
	double DTB();
};
void Nguoi::Nhap(){
	cout<<"Nhap ten: "; fflush(stdin); gets(name);
	cout<<"Nhap tuoi: "; cin>>age;
	cout<<"Nhap dia chi: "; fflush(stdin); gets(address);
	cout<<"Diem Toan: "; cin>>diemToan;
	cout<<"Diem Ly: "; cin>>diemLy;
	cout<<"Diem Hoa: "; cin>>diemHoa;
}
void Nguoi::Xuat(){
	cout<<"Ten: "<<name<<endl;
	cout<<"Tuoi: "<<age<<endl;
	cout<<"Dia chi: "<<address<<endl;
	cout<<"Diem Toan: "<<diemToan<<endl;
	cout<<"Diem Ly: "<<diemLy<<endl;
	cout<<"Diem Hoa: "<<diemHoa<<endl;
}
double Nguoi::DTB(){
	return (diemToan+diemLy+diemHoa)/3;
}
class Animal{
public:
	char name[30];
	int age;
	char address[30];
//	void Sleep(const char *banbe){
//		cout<<name<<" dang ngu cung "<<banbe<<endl;
//	}
//	void eat(){
//		cout<<name<<"eating...."<<endl;
//	}
    void Sleep(const char *banbe);
    void Eat();
    int TuoiTho();
    void Nhap();
	void Xuat();
};
void Animal::Sleep(const char *banbe){
	cout<<name<<" dang ngu cung "<<banbe<<endl;
}
void Animal::Eat(){
	cout<<name<<" eating..."<<endl;
}
int Animal::TuoiTho(){
	return age+10;
}
void Animal::Nhap(){
	cout<<"Nhap ten: "; gets(name);
	cout<<"Nhap tuoi: "; cin>>age;
	cout<<"Nhap dia chi: "; fflush(stdin); gets(address);
}
void Animal::Xuat(){
	cout<<"Ten: "<<name<<endl;
	cout<<"Tuoi: "<<age<<endl;
	cout<<"Dia chi: "<<address<<endl;
}
int main(){
//	Animal dog1, dog2;
//    dog1.Nhap();
//    dog1.Xuat();
//    dog2.Nhap();
//    dog2.Xuat();
//    if(dog1.TuoiTho()>dog2.TuoiTho()){
//    	cout<<dog1.name<<" co tuoi tho lon hon "<<dog2.name<<endl;
//	}
//	else{
//		cout<<dog2.name<<" co tuoi tho lon hon "<<dog1.name<<endl;
//	}
	Nguoi ng1, ng2;
	ng1.Nhap();
	ng1.Xuat();
	ng2.Nhap();
	ng2.Xuat();
	if(ng1.DTB()>ng2.DTB()){
		cout<<ng1.name<<"-"<<ng1.DTB();
	}
	else{
		cout<<ng2.name<<"-"<<ng2.DTB();
	}
	return 0;
}
