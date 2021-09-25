#include <iostream>
using namespace std;
/*
 static: Duoc cap phat o nho khi bien dich chuong trinh, o nho khong thay doi;
 truy xuat: tenClass::tenBien;
 khoi tao: int Student::cnt = 0;
*/
class Student{
private:
	static int cnt;
	int tuoi;
	
public:
	Student(){
		cnt++;
	}
	void Nhap();
	void Xuat();
};
//void Student::Nhap(){
//	cout<<"Nhap ten: "; fflush(stdin); gets(hoTen);
//}
void Student::Xuat(){
	cout<<"cnt: "<<Student::cnt<<endl;
	cout<<"cnt: "<<&Student::cnt<<endl;
	//cout<<"Ten: "<<hoTen<<endl;
}
int Student::cnt=0;
int main(){
	Student svA;
	svA.Xuat();
	Student svB;
	svB.Xuat();
	Student svC;
	svA.Xuat();
	svB.Xuat();
	svC.Xuat();
}
//https://codelearn.io/learning/object-oriented-programming-in-cpp/2812353
