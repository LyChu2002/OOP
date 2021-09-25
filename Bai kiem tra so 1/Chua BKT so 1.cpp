#include <iostream>
#include <iomanip>
#include <stdlib.h>

using namespace std;

class NCC{
private:
	char maNCC[7], tenNCC[30], diaChi[30], sdt[20];
public:
	void Nhap();
	void Xuat();
};

void NCC::Nhap(){
	cout<<"Nhap ma NCC     : "; fflush(stdin); gets(maNCC);
	cout<<"Nhap ten NCC    : "; fflush(stdin); gets(tenNCC);
	cout<<"Nhap dia chi NCC: "; fflush(stdin); gets(diaChi);
	cout<<"Nhap sdt NCC    : "; fflush(stdin); gets(sdt);
}

void NCC::Xuat(){
	cout<<left<<setw(15)<<"Ma nha cung cap: "<<setw(25)<<maNCC<<"Ten nha cung cap: "<<tenNCC<<endl;
	cout<<left<<"Dia chi: "<<setw(33)<<diaChi<<"SDT: "<<sdt<<endl;
}
class Phieu;
class SanPham{
private:
	char maSP[5], tenSP[20];
	int soLuong;
	double donGia;
public:
	double GetThanhTien(){
		return soLuong*donGia;
	}
	void Nhap();
	void Xuat();
	//friend class Phieu;
	friend void Change(Phieu a);
};

void SanPham::Nhap(){
	cout<<"Nhap ma SP   : "; fflush(stdin); gets(maSP);
	cout<<"Nhap ten SP  : "; fflush(stdin); gets(tenSP);
	cout<<"Nhap so luong: "; cin>>soLuong;
	cout<<"Nhap don gia : "; cin>>donGia;
}

void SanPham::Xuat(){
	cout<<left<<setw(10)<<maSP<<setw(25)<<tenSP<<setw(15)<<soLuong<<setw(15)<<donGia<<setw(15)<<GetThanhTien()<<endl;
}

class Phieu{
private:
	char maPhieu[7], ngayLap[15];
	NCC x;
	SanPham *sanpham;
	int n;
public:
	void Nhap();
	void Xuat();
	friend void SortSanPham(Phieu a);
	friend void Insert(Phieu &a, SanPham x, int pos);
	friend void Delete(Phieu &a, int pos);
    friend void Change(Phieu a);
};

void Phieu::Nhap(){
	cout<<"Nhap ma phieu: "; fflush(stdin); gets(maPhieu);
	cout<<"Nhap ngay lap: "; fflush(stdin); gets(ngayLap);
	x.Nhap();
	cout<<"Nhap so san pham: "; cin>>n;
	sanpham = new SanPham[n];
	for(int i=0; i<n; i++){
		cout<<"\tNhap thong tin san pham thu "<<i+1<<":"<<endl;
		sanpham[i].Nhap();
	}
}

void Phieu::Xuat(){
	cout<<"Dai hoc Victory"<<endl;
	cout<<"\t\t\tPHIEU NHAP VAN PHONG PHAM"<<endl;
	cout<<left<<setw(17)<<"Ma phieu: "<<setw(25)<<maPhieu<<"Ngay lap: "<<ngayLap<<endl;
    x.Xuat();
    cout<<left<<setw(10)<<"Ma SP"<<setw(25)<<"Ten san pham"<<setw(15)<<"So luong"<<setw(15)<<"Don gia"<<setw(15)<<"Thanh tien"<<endl;
    double sum=0;
    for(int i=0; i<n; i++){
    	sanpham[i].Xuat();
    	sum+=sanpham[i].GetThanhTien();
	}
	cout<<right<<setw(25)<<"TONG"<<setw(44)<<sum<<endl;
	cout<<right<<setw(15)<<"Hieu truong"<<setw(25)<<"Phong tai chinh"<<setw(25)<<"Nguoi lap"<<endl;
}

void SortSanPham(Phieu a){
	for(int i=0; i<a.n-1; i++){
		for(int j=i+1; j<a.n; j++){
			if(a.sanpham[i].GetThanhTien()>a.sanpham[j].GetThanhTien()){
				SanPham temp = a.sanpham[i];
				a.sanpham[i] = a.sanpham[j];
				a.sanpham[j] = temp;
			}
		}
	}
}

void Insert(Phieu &a, SanPham x, int pos){
	//a= (int*)realloc(a, (n+1)*sizeof(int));
	a.sanpham = (SanPham*)realloc(a.sanpham, (a.n+1)*sizeof(SanPham));
	for(int i=a.n; i>pos-1; i--){
		a.sanpham[i] = a.sanpham[i-1];
	}
	a.n++;
	a.sanpham[pos-1] = x;
}

void Delete(Phieu &a, int pos){
	
	if(0<pos && pos<=a.n){
		for(int i=pos-1; i<a.n; i++){
			a.sanpham[i] = a.sanpham[i+1];
		}
		a.sanpham = (SanPham*)realloc(a.sanpham, (a.n-1)*sizeof(SanPham));
		a.n--;
		cout<<"\n\n\tPhieu sau khi xoa: "<<endl;
		a.Xuat();
	}
	else{
		cout<<"\nVi tri xoa khong hop le"<<endl;
	}
}

void Change(Phieu a){
	for(int i=0; i<a.n; i++){
		if(a.sanpham[i].soLuong<10){
			a.sanpham[i].soLuong = 10;
		}
	}
}

int main(){
	Phieu p;
	p.Nhap();
	cout<<"\n\n\tThong tin phieu: "<<endl;
	p.Xuat();
	//Cau2:
	SortSanPham(p);
	cout<<"\n\n\tThong tin phieu sau khi sap xep: "<<endl;
	p.Xuat();
	//Cau3:
	SanPham x;
	cout<<"\nNhap san pham can chen: "<<endl;
	x.Nhap();
	Insert(p, x, 1);
	cout<<"\n\n\tThong tin phieu sau khi chen: "<<endl;
	p.Xuat();
	//Cau4:
	int pos;
	cout<<"Nhap vi tri xoa: "; cin>>pos;
	Delete(p, pos);
	
	//Cau5:
    Change(p);
    cout<<"\n\n\tThong tin phieu sau thay doi: "<<endl;
    p.Xuat();
	
	return 0;
}


