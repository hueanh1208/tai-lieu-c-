#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>
using namespace std;
/*void Nhap(string ht, string ns, string lop, float dt, float dv, float dav){
	cout<<"Nhap ho ten: ";
	getline(cin, ht);
	cout<<"\nNhap ngay sinh: ";
	getline(cin, ns);
	cout<<"\nNhap lop: ";
	getline(cin, lop);
	cout<<"\nNhap diem toan: ";
	cin>>dt;
	cout<<"\nNhap diem van: ";
	cin>>dv;
	cout<<"\nNhap diem anh van: ";
	cin>>dav;
}
void Xuat(string ht, string ns, string lop, float dt, float dv, float dav){
	cout<<"\nThong tin sinh vien da nhap: ";
	cout<<"\nHo ten:       "<<ht;
	cout<<"\nNgay sinh:    "<<ns;
	cout<<"\nLop:          "<<lop;
	cout<<"\nDiem toan:    "<<dt;
	cout<<"\nDiem van:     "<<dv;
	cout<<"\nDiem anh van: "<<dav;
}
void XepLoai(float dt, float dv, float dav){
	float S=(dt+dv+dav)/3;
	if(S>=8) cout<<"Gioi";
	else if((S>=6.5)&&(S<8)) cout<<"Kha";
	else if((S>=5)&&(S<6.5)) cout<<"Trung binh";
	else cout<<"Yeu";
}*/
int main()
{
	string ht, ns, lop;
	float dt,dv,dav;
	cout<<"Nhap ho ten: ";
	getline(cin, ht);
	cout<<"\nNhap ngay sinh: ";
	getline(cin, ns);
	cout<<"\nNhap lop: ";
	getline(cin, lop);
	cout<<"\nNhap diem toan: ";
	cin>>dt;
	cout<<"\nNhap diem van: ";
	cin>>dv;
	cout<<"\nNhap diem anh van: ";
	cin>>dav;
	cout<<"\nThong tin sinh vien da nhap: ";
	cout<<"\nHo ten:       "<<ht;
	cout<<"\nNgay sinh:    "<<ns;
	cout<<"\nLop:          "<<lop;
	cout<<"\nDiem toan:    "<<dt;
	cout<<"\nDiem van:     "<<dv;
	cout<<"\nDiem anh van: "<<dav;
	float S=(dt+dv+dav)/3;
	cout<<"\nDiem trung binh: "<<S;
	cout<<"\nXep loai hoc sinh dua tren diem trung binh: ";
	if(S>=8) cout<<"Gioi";
	else if((S>=6.5)&&(S<8)) cout<<"Kha";
	else if((S>=5)&&(S<6.5)) cout<<"Trung binh";
	else cout<<"Yeu";
}
turn dem;
