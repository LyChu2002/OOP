#include <iostream>
#include <string.h>
using namespace std;
class Date{
private:
	int day, month, year;
public:
	void Nhap();
	void Xuat();
	friend class Student;
};
//void Date::Nhap(){
//	cout<<"Nhap ngay: "; cin>>day;
//	cout<<"Nhap thang: "; cin>>month;
//	cout<<"Nhap nam: "; cin>>year;
//}
void Date::Xuat(){
	cout<<day<<"/"<<month<<"/"<<year<<endl;
}
class Student{
private:
	char maSV[30], hoTen[30];
	Date ngaySinh;
public:
	void Nhap();
	void Xuat();
};
void Student::Nhap(){
	cout<<"Nhap ma sinh vien: "; fflush(stdin); gets(maSV);
	cout<<"Nhap ten sinh vien: "; fflush(stdin); gets(hoTen);
	//ngaySinh.Nhap();
	cout<<"Nhap ngay sinh: "; cin>>ngaySinh.day;
	cout<<"Nhap thang sinh: "; cin>>ngaySinh.month;
	cout<<"Nhap nam sinh: "; cin>>ngaySinh.year;
}
void Student::Xuat(){
	cout<<"Ma sinh vien: "<<maSV<<endl;
	cout<<"Ten sinh vien: "<<hoTen<<endl;
	cout<<"Ngay sinh: ";
	ngaySinh.Xuat();
}
int main(){
	Student svA;
	svA.Nhap();
	svA.Xuat();
	return 0;
}

/*
class Date{
   friend class Student;
}
class Student{

}

-> Student la ban cua Date: co the truy xuat den cac thuoc tinh cua Date
-> Date khong phai la ban cua Student: khong the truy xuat den cac thuoc tinh cua Student

Tom tat: Khi ngaySinh cua Student yeu cau truy cap den thuoc tinh cua ngaySinh
       -> De cac thuoc tinh cua ngaySinh la public
       -> Khai bao Student la ban cua class Date
*/

