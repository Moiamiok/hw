#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main (){
//bai 1
//	float a=5.141;
//	float b=-2;
//	float c=0.8;
//	cout << "Phuong trinh co dang " << fixed << setprecision(2) << a << "x^2 + " << b << "x + " << c << " = 0";
//bai 2
//	float r;
//	cin>> r;
//	cout<<"chu vi hinh tron: "<<r*2*M_PI<<endl;
//	cout<<"dien tich hinh tron: "<<pow(r,2)*M_PI<<endl;
//	bai 3
//	float x,y,z;
//	cin>>x>>y>>z;
//	if((x+y)>z && (y+z)>x && (x+z)>y  ){
//		cout<<"chu vi hinh tam giac: "<< x+y+z <<endl;
//		cout << "Dien tich tam giac la: " << sqrt((x+y+z)*(x+y-z)*(x+z-y)*(z+y-x))/4;
//	}
//	else{
//		cout<<"ko phai la tam giac";
//		}
//bai 4+5
//	char a;
//	cin>> a;
//	cout<< char(a-32)<< "-"<<int(a-32);
//	return 0;
	long msv;
	string ht;
	string khoa;
	int khoahoc;
	bool gt;
	char lop;
	double diemtb;
	cout <<"Nhap ma sinh vien: ";
	cin >> msv;
	cout << "Nhap ho ten: ";
	cin >> ht;
	cout << "Nhap khoa: " ;
	cin >> khoa;
	cout<< endl;
	cout << "Nhap khoahoc: ";
	cin >> khoahoc;
	cout << "Nhap gioi tinh: ";
	cin >> gt;
	cout << "Nhap lop: ";
	cin >> lop;
	cout << "Nhap dtb: ";
	cin >> diemtb;
	cout <<"SinhVien["<< msv<<"-"<< ht<<"-"<<khoa<<"-"<<diemtb<<"-";
	string a;
	if(gt==1){
		a="nu";
	}else{
		a="nam";
	}
	cout << a<<"-"<<lop<<diemtb<<"]";
}






