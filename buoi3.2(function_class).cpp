#include <iostream>
#include <string.h>
using namespace std;
class Date{
private:
	int day, month, year;
public:
	
	void Xuat();
	friend void Nhap(Date &ngaySinh);
};
void Date::Xuat(){
	cout<<day<<"/"<<month<<"/"<<year<<endl;
}
void Nhap(Date &ngaySinh){
	cout<<"Nhap ngay sinh: "; cin>>ngaySinh.day;
	cout<<"Nhap thang sinh: "; cin>>ngaySinh.month;
	cout<<"Nhap nam sinh: "; cin>>ngaySinh.year;
}
int main(){
	Date date;
	Nhap(date);
	date.Xuat();
	return 0;
}
