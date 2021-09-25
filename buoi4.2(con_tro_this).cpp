#include <iostream>
using namespace std;
class PS{
private:
	int TS, MS;
public:
	PS();
	PS(int TS, int MS);
	~PS();
	void Xuat();
};
PS::PS(){
	this->MS=1;
	this->TS=0;
}
PS::~PS(){
	this->TS=0;
	this->MS=1;
}
PS::PS(int TS, int MS){
	TS=TS;
	MS=MS;
}
void PS::Xuat(){
	cout<<"PS: "<<this->TS<<"/"<<this->MS<<endl;
}
int main(){
	PS ps(3, 2);
//	ps.Xuat();
    PS *p=&ps;
    p->Xuat();
	return 0;
}
