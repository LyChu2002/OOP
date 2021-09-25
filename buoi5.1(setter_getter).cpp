#include <iostream>
using namespace std;
class Date{
private:
	int day, month, year;
public:
	int GetDay(){
		return day;
	};
	int GetMonth(){
		return month;
	};
	int GetYear(){
		return year;
	};
	void SetDay(int day){
		this->day=day;
	};
	void SetMonth(int month){
		this->month=month;
	};
	void SetYear(int year){
		this->year=year;
	};
};
class Person{
private:
	Date birthday;
public:
	void Nhap();
	void Xuat();
};
void Person::Nhap(){
	int temp;
	cout<<"Nhap ngay sinh : "; cin>>temp; birthday.SetDay(temp);
	cout<<"Nhap thang sinh: "; cin>>temp; birthday.SetMonth(temp);
	cout<<"Nhap nam sinh  : "; cin>>temp; birthday.SetYear(temp);
}
void Person::Xuat(){
	cout<<birthday.GetDay()<<"/"<<birthday.GetMonth()<<"/"<<birthday.GetYear();
}
int main(){
	Person a;
	a.Nhap();
	a.Xuat();
	return 0;
}
