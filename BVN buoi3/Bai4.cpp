#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;

class School{
private:
	char name[30];
	char date[15];
	friend class Faculty;
};

class Faculty{
private:
	char name[30];
	char date[15];
	School x;
public:
	void Input();
	void Output();
};

void Faculty::Input(){
	cout<<"Nhap name of faculty: "; fflush(stdin); gets(name);
	cout<<"Nhap date of faculty: "; fflush(stdin); gets(date);
	cout<<"Nhap name of school: "; fflush(stdin); gets(x.name);
	cout<<"Nhap date of school: "; fflush(stdin); gets(x.date);
}

void Faculty::Output(){
	cout<<setw(20)<<left<<name;
	cout<<setw(20)<<left<<date;
	cout<<setw(20)<<left<<x.name;
	cout<<setw(20)<<left<<x.date;
}

class Student{
private:
	Faculty y;
	char class1[15];
	double score;
public:
	Student();
	void Input();
	void Output();
};

Student::Student(){

	strcpy(class1, "");
	score=0;
}
void Student::Input(){
	y.Input();
	cout<<"Nhap student's class: "; fflush(stdin); gets(class1);
	cout<<"Nhap student's score: "; cin>>score;
}

void Student::Output(){
	y.Output();
	cout<<setw(20)<<left<<class1;
	cout<<setw(20)<<left<<score<<endl;
}

int main(){
	int n;
	cout<<"Nhap so sinh vien: "; cin>>n;
	Student *a;
	a = new Student[n];
	for(int i=0; i<n; i++){
		cout<<"\n\tNhap sinh vien thu "<<i+1<<endl;
		a[i].Input();
	}
	cout<<setw(20)<<left<<"Name of faculty";
	cout<<setw(20)<<left<<"Date of faculty";
	cout<<setw(20)<<left<<"Name of school";
	cout<<setw(20)<<left<<"Date of school";
	cout<<setw(20)<<left<<"Student's class";
	cout<<setw(20)<<left<<"Student's score"<<endl;
	for(int i=0; i<n; i++){
		a[i].Output();
	}
	return 0;
}
