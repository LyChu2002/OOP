#include <iostream>
#include <string.h>
using namespace std;
class SinhVien{
public:
	char masv[30];
	char hoten[30];
	int ngay, thang, nam;
	char gioi_tinh[30];
	float dtb;
	char dao_duc[30];
	void Nhap();
	void Xuat();
};
void SinhVien::Nhap(){
	cout<<"Nhap ma sinh vien: "; gets(masv);
	cout<<"Nhap ho ten: "; gets(hoten);
	cout<<"Nhap ngay sinh: "; cin>>ngay;
	cout<<"Nhap thang sinh: "; cin>>thang;
	cout<<"Nhap nam sinh: "; cin>>nam;
	cout<<"Gioi tinh: "; fflush(stdin); gets(gioi_tinh);
	cout<<"Diem trung binh: "; cin>>dtb;
	cout<<"Xep loai dao duc: "; fflush(stdin); gets(dao_duc);
}
void SinhVien::Xuat(){
	cout<<"Ma sinh vien: "<<masv<<endl;
	cout<<"Ho ten: "<<hoten<<endl;
	cout<<"Ngay/thang/nam sinh: "<<ngay<<"/"<<thang<<"/"<<nam<<endl;
	cout<<"Gioi tinh: "<<gioi_tinh<<endl;
	cout<<"Diem trung binh: "<<dtb<<endl;
	cout<<"Xep loai dao duc: "<<dao_duc<<endl;
}
int main(){
	SinhVien SVDiemCao, SVDiemThap;
	SVDiemCao.Nhap();
	SVDiemThap.Nhap();
	if(SVDiemCao.dtb<SVDiemThap.dtb){
		SinhVien tg;
		tg=SVDiemCao;
		SVDiemCao=SVDiemThap;
		SVDiemThap=tg;
	}
	cout<<"\nThong tin sinh vien diem cao: "<<endl;
	SVDiemCao.Xuat();
	cout<<"\nThong tin sinh vien diem thap: "<<endl;
	SVDiemThap.Xuat();
	return 0;
}
