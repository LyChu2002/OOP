#include <iostream>
using namespace std;
/*
    +) Overloading:
    	1)function(ham)
    	2)operator(toan tu)
    Phuong thuc toan tu


*/
int Sum(int a, int b){
	return a+b;
}
float Sum(float a, float b){
	return a+b;
}
double Sum(double a, double b){
	return a+b;
}
int main(){
	cout<<Sum(1, 2)<<endl;
	cout<<Sum(1.5f, 2.4f)<<endl;
	cout<<Sum(1.5, 2.4)<<endl;
	return 0;
}
