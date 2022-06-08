/*
#include<iostream>
#include<string>
using namespace std;
void daochuoi(string s){
	for(int i=0; i<s.length()/2; i++){
		char x=s[i];
		s[i]=s[s.length()-i-1];
		s[s.length()-i-1]=x;
	}
	cout<<s;
}
int solanxuathien(string s, char c){
	int dem=0;
	for(int i=0; i<=s.length(); i++){
		if(s[i]==c){ 
			dem++;
		}   
	}
	return dem;
}
int demtu(string s){
	int dem=0;
	if(s[0]!=' ')
		dem++;
	for(int i=0; i<=s.length(); i++){
		if(s[i]==' '&& s[i+1]!=' ')
			dem++;
	}
	return dem;
}
void xoachuoi(string s, string s2){
	while(s.find(s2) != string::npos){
		s.erase(s.find(s2),s2.length());
	}
	cout<<s;
}
int main(){
	string s,n,s2; 
	cout<<"Nhap chuoi: ";
	getline(cin,s);
	cout<<"chuoi dao la: ";
	daochuoi(s);
	char c;
	cout<<"\nNhap 1 ky tu bat ky: ";
	cin>>c;
	cout<<"So lan xuat hien ky tu "<<c<<" la: "<<solanxuathien(s,c);
	cout<<"\nso tu trong chuoi la: "<<demtu(s);
	cout<<"\nNhap chuoi s2: ";
	cin.ignore(); 
	getline(cin,s2);
	cout<<"Xoa chuoi s2 co trong chuoi s: ";
	xoachuoi(s,s2);
}
*/
#include<iostream>
#include<string>
using namespace std;
void nhapsinhvien(string &ht,string &ns, string &lop, float &dtoan, float &dvan, float &dav){
	cout<<"Ho ten hoc sinh: ";
	getline(cin,ht);
	cout<<"Ngay sinh: ";
	getline(cin,ns);
	cout<<"Lop: ";
	getline(cin,lop);
	cout<<"Diem toan: ";
	cin>>dtoan;
	cout<<"Diem ngu van: ";
	cin>>dvan;
	cout<<"Diem anh van: ";
	cin>>dav;
}
void xuat(string &ht, string &ns, string &lop, float &dtoan, float &dvan, float &dav){
	cout<<"\nTHONG TIN HOC SINH: ";
	cout<<"\nHo ten: "<<ht;
	cout<<"\nNgay sinh: "<<ns;
	cout<<"\nLop: "<<lop;
	cout<<"\nDiem toan: "<<dtoan;
	cout<<"\nDiem van: "<<dvan;
	cout<<"\nDiem anh van: "<<dav;
	
}
void diemtrungbinh(float &dtoan, float &dvan, float &dav){
	float S=(dtoan+dvan+dav)/3;
	cout.precision(2);
	cout<<"\nDiem trung binh: "<<S;
	cout<<"\nXep loai hoc sinh: ";
	if(S>=8) 
		cout<<"Gioi";
	else if((S>=6.5)&&(S<8)) 
		cout<<"Kha";
	else if((S>=5)&&(S<6.5)) 
		cout<<"Trung binh";
	else 
		cout<<"Yeu";
}
int main(){
	string ht,ns,lop;
	float dtoan,dvan,dav;
	nhapsinhvien(ht,ns,lop,dtoan,dvan,dav);
	xuat(ht,ns,lop,dtoan,dvan,dav);
	diemtrungbinh(dtoan,dvan,dav);
}




