# THDC bài kiểm tra giữa kỳ
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a,b,c;
	int n;
	cout<<"Nhap vao so tien ban dau= ";
	cin>>a;
	cout<<"Nhap vao so tien ky vong= ";
	cin>>b;
	cout<<"Nhap vao lai suat (%):";
	cin>>c;
	n=(log10(b/a))/(log10(1+c*1/100));
	cout<<"So nam de dat duoc so tien ky vong="<<n;
    return 0;
}
