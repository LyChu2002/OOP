#include <iostream>
#include <string.h>
using namespace std;

class Date{
private:
	int day, month, year;
public:
	void Nhap();
	void Xuat();
};

void Date::Nhap(){
	cout<<"Nhap ngay: "; cin>>day;
	cout<<"Nhap thang: "; cin>>month;
	cout<<"Nhap nam: "; cin>>year;
}

void Date::Xuat(){
	cout<<day<<"/"<<month<<"/"<<year<<endl;
}

class DiaChi{
private:
	char dienThoai[12];
	char phuong[30];
	char quan[30];
	char thanhPho[30];
	friend class DoanhNghiep;
};

class DoanhNghiep{
private:
	int maDn;
	char tenDn[60];
	Date ngayTl;
	DiaChi diaChi;
	char giamDoc[30];
	long doanhThu;
public:
	void Nhap();
	void Xuat();
};

void DoanhNghiep::Nhap(){
	cout<<"Nhap ma doanh nghiep: "; cin>>maDn;
	cout<<"Nhap ten doanh nghiep: "; fflush(stdin); gets(tenDn);
	ngayTl.Nhap();
	cout<<"Nhap dien thoai: "; fflush(stdin); gets(diaChi.dienThoai);
	cout<<"Nhap phuong: "; fflush(stdin); gets(diaChi.phuong);
	cout<<"Nhap quan: "; fflush(stdin); gets(diaChi.quan);
	cout<<"Nhap thanh pho: "; fflush(stdin); gets(diaChi.thanhPho);
	cout<<"Nhap ten giam doc: "; fflush(stdin); gets(giamDoc);
	cout<<"Nhap doanh thu: "; cin>>doanhThu;
}

void DoanhNghiep::Xuat(){
	cout<<"Ma doanh nghiep: "<<maDn<<endl;
	cout<<"Ten doanh nghiep: "<<tenDn<<endl;
	cout<<"Ngay thanh lap: ";
	ngayTl.Xuat();
	cout<<"Dien thoai: "<<diaChi.dienThoai<<endl;
	cout<<"Phuong: "<<diaChi.phuong<<endl;
	cout<<"Quan: "<<diaChi.quan<<endl;
	cout<<"Thanh pho: "<<diaChi.thanhPho<<endl;
	cout<<"Ten giam doc: "<<giamDoc<<endl;
	cout<<"Doanh thu: "<<doanhThu<<endl;
}

int main(){
	DoanhNghiep dnA;
	dnA.Nhap();
	cout<<"Thong tin doanh nghiep:"<<endl;
	dnA.Xuat();
	return 0;
}
