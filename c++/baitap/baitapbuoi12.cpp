#include<iostream>
using namespace std;
void nhapmang(int a[], int& n){
	cout<<"Nhap n: ";
	cin>>n;
	while(n>=100 || n<=0){
		cout<<"Nhap n>0: ";
		cin>>n;
	}
	cout<<"Nhap mang:\n";
	for(int i=0; i<n; i++){
		cout<<"a["<<i<<"]= ";
		cin>>a[i];
	}
}
void cauA(int a[], int n){
	for (int i = 0; i < n; i++)
		if(a[i]%2!=0)
			cout << a[i] << " ";
}
void cauB(int a[], int n){
	for (int i = 0; i < n; i++){
		if(a[i]<0)
			cout<<a[i]<<" ";
	}
		}
void cauC(int a[], int n){
	for (int i = 0; i < n; i++){
		if(a[i]%5==0 || a[i]%7==0)
			cout<<a[i]<<" ";
	}
}
void cauD(int a[], int n){
	int m,i;
	bool m = false;
	for (int i = 0; i < n; i++){
		m=a[i]%10;	
		if(m==2 || m==-2)
			m=true;
			cout<<a[i]<<" ";
	}
	return
}

int cauE(int a[], int n){
	int S=0;
	for (int i = 0; i < n; i++){
		if(a[i]%2==0){
			S+=a[i];
		}
	}
	return S;
	
}
int cauF(int a[], int n){
	int dem=0;
	for (int i = 0; i < n; i++){
		if(a[i]<0)
			dem++;
	}
	return dem;
}
void cauG(int a[], int n){
	int vt=-1;
	for (int i = 0; i < n; i++){
		if(a[i]%11==0){
			vt=i;
			break;
		}
	}
	cout<<"\nVi tri So nguyen dau tien chia het cho 11 la: "<<vt;	
}
int main(){
	int a[100];
	int n;
	nhapmang(a,n);
	cout<<"So nguyen le la: ";
	cauA(a,n);
	cout<<"\nSo nguyen am la: ";
	cauB(a,n);
	cout<<"\nSo nguyen chia het chi 5 hoac 7 la: ";
	cauC(a,n);	
	cout<<"\nSo nguyen co chu so tan cung bang 2 la: ";
	cauD(a,n);
	cout<<"\nTong cac so chan la: "<<cauE(a,n);
	cout<<"\nSo luong so nguyen am la: "<<cauF(a,n); 
	cauG(a,n);
}
