#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;
class Employee{
private:
	char id[25];
	char name[30];
	int age;
	static long salary;
public:
	void Nhap();
	void Xuat();
};

long Employee::salary=5000000;

void Employee::Nhap(){
	cout<<"Nhap id nhan vien: "; fflush(stdin); gets(id);
	cout<<"Nhap ten nhan vien: "; fflush(stdin); gets(name);
	cout<<"Nhap tuoi nhan vien: "; cin>>age;
}

void Employee::Xuat(){
	cout<<setw(15)<<left<<id;
	cout<<setw(20)<<left<<name;
	cout<<setw(15)<<left<<age;
	cout<<setw(20)<<left<<Employee::salary<<endl;
}
int main(){
	Employee nv1, nv2;
	nv1.Nhap();
	nv2.Nhap();
	cout<<setw(15)<<left<<"Id";
	cout<<setw(20)<<left<<"Name";
	cout<<setw(15)<<left<<"Age";
	cout<<setw(20)<<left<<"Salary"<<endl;
	nv1.Xuat();
	nv2.Xuat();
	return 0;
}
