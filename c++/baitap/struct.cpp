#include<iostream>
#include<string>
using namespace std;
struct DongVat{
	string ten;
	int chieucao, cannang, sochan;
};
void nhap(DongVat dv[], int& n){
	
	for(int i=0; i<n; i++){
		cout<<"Nhap con vat thu "<<i+1<<": "<<endl;
		cin.ignore();
		cout<<"Nhap ten: ";
		getline(cin,dv[i].ten);
		cout<<"Nhap chieu cao: ";
		cin>>dv[i].chieucao;
		cout<<"Nhap can nang: ";
		cin>>dv[i].cannang;
		cout<<"Nhap so chan: ";
		cin>>dv[i].sochan;
	}
}
void xuat(DongVat dv[], int n){
	for(int i=0; i<n; i++){
		cout<<"\nThong tin con vat thu "<<i+1<<": ";
		cout<<"\nTen: "<<dv[i].ten;
		cout<<"\nChieu cao: "<<dv[i].chieucao;
		cout<<"\nCan nang: "<<dv[i].cannang;
		cout<<"\nSo chan: "<<dv[i].sochan;
	}
}
void chieucaonhohon50(DongVat dv[], int n){
	for(int i=0; i<n; i++){
		if(dv[i].chieucao<50);
			cout<<dv[i].ten<<", ";
	}
}
void chanvacannang(DongVat dv[], int n){
	for(int i=0; i<n; i++){
		if(dv[i].sochan==2 && dv[i].cannang>2)
			cout<<dv[i].ten<<" ";
	}
}
int tongcannang(DongVat dv[], int n){
	int tong=0;
	for(int i=0; i<n; i++){
		tong+=dv[i].cannang;
	}
	return tong;
}
int dem(DongVat dv[], int n){
	int dem=0;
	for(int i=0; i<n; i++){
		string t=dv[i].ten;
		if(t.length()>3){
			dem++;
		}
	}
	return dem;
}
void tenchudau(DongVat dv[], int n){
	for(int i=0; i<n; i++){
		string t=dv[i].ten;
		if(t[0]=='h')
		cout<<t<<endl;
	}
}
void sapxeptangdan(DongVat dv[], int n){
	DongVat x;
	for(int i=0; i<n-1; i++){
		string s=dv[i].ten; 
		for(int j=i+1;j<n; j++){
			if(s.compare(dv[j].ten)>0){
				x=dv[i];
				dv[i]=dv[j];
				dv[j]=x;
			}
		}
	}
}
int main(){
	DongVat dv[20];
	int n;
	cout<<"Nhap n:";
	cin>>n;
	nhap(dv,n);
	xuat(dv,n);
/*	cout<<"\nCon vat co chieu cao nho hon 50: ";
	chieucaonhohon50(dv,n);
	cout<<"\nCon vat co so chan = 2 va can nang >2: ";
	chanvacannang(dv,n);
	cout<<"\nTong can nang: "<<tongcannang(dv,n);
	cout<<"\nSo con vat dai hon 3 ki tu: "<<dem(dv,n);
	cout<<"\nTen con vat bat dau bang chu h: ";
	tenchudau(dv,n);*/
	cout<<"\n Saap xep tang dan theo ten: "<<
	sapxeptangdan(dv,n);
}

