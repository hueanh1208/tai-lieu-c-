/*
#include<iostream>
#include<string>
using namespace std;
struct HocSinh{
	string ten;
	string ngaySinh;
	float dtb;
};
int main(){
	HocSinh hs1,hs2;
//	hs1 = { "Nguyen Van A","16/2/1992",9.5};
//	cout<<"Ten: "<<hs1.ten;
	getline(cin,hs2.ten);
	getline(cin,hs2.ngaySinh);
	cin>> hs2.dtb;
	cout<<"Thong tin hoc sinh da nhap: ";
	cout<<hs2.ten<<endl;
	cout<<hs2.ngaySinh<<endl;
	cout<<hs2.dtb<<endl;
}*/
#include<iostream>
#include<string>
using namespace std;
struct HocSinh{
	string ten;
	string ngaySinh;
	float dtb,dt,dv,dav;
};
float Dtb(float dt, float dv, float dav){
	float S= (dt+dv+dav)/3;
	return S;
}
void nhap(HocSinh hs[], int &n){
	cout<<"Nhap n: ";
	cin>>n;
	cin.ignore();
	for(int i=0; i<n;i++){
		cout<<"Nhap hoc sinh thu "<<i+1<<": "<<endl;
		cin.ignore();
		cout<<"Ho ten hoc sinh: ";
		getline(cin,hs[i].ten);
		cout<<"Ngay sinh: ";
		getline(cin,hs[i].ngaySinh);
		cout<<"Diem toan: ";
		cin>>hs[i].dt;
		cout<<"Diem ngu van: ";
		cin>>hs[i].dv;
		cout<<"Diem anh van: ";
		cin>>hs[i].dav;
		hs[i].dtb=Dtb(hs[i].dt,hs[i].dv, hs[i].dav);
	}

}
void sapxeptangdan(HocSinh hs[], int n){
	HocSinh x;
	for(int i=0; i<n-1; i++){
		for(int j=i+1;j<n; j++){
			if(hs[i].dtb>hs[j].dtb){
				x=hs[i];
				hs[i]=hs[j];
				hs[j]=x;
			}
		}
		
	}
}
void xuat(HocSinh hs[], int n){
	for(int i=0; i<n; i++){
		cout<<"Thong tin hoc sinh thu "<< i+1<<" da nhap: ";
		cout<<"\nHo ten sinh vien: "<<hs[i].ten;
		cout<<"\nNgay sinh: "<<hs[i].ngaySinh;
		cout<<"\nDiem toan: "<<hs[i].dt;
		cout<<"\nDiem van: "<<hs[i].dv;
		cout<<"\nDiem anh van: "<<hs[i].dav;
		cout<<"\nDiem trung binh:"<<hs[i].dtb;
}
}
int main(){
	HocSinh hs[100];
	int n;
	nhap(hs,n);
	xuat(hs,n);
	cout<<"Diem trung binh tang dan: ";sapxeptangdan(hs, n);
}










