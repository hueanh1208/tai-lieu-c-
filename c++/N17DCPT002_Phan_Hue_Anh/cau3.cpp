#include <iostream>
using namespace std;
void nhapmang(int a[], int& n){
	cout<<"Nhap n: ";
	cin>>n;
	while(n<=0){
		cout<<"Nhap n>0: ";
		cin>>n;
	}
	cout<<"Nhap mang:\n";
	for(int i=0; i<n; i++){
		cout<<"a["<<i<<"]= ";
		cin>>a[i];
	}
}
void xuatmang(int a[], int n){
	for(int i=0; i<n; i++)
		cout<<a[i]<<" ";
}
int tbcong(int a[], int n){
	int Tong = 0;
	int k=0;
	for(int i=0; i<n; i++){
		if((a[i]%2==0) && (a[i]%9==0))
		{
			Tong += a[i];
			k++;
		}
	}
	return Tong/k;
}
int main() {
  int a[100];
  int n;
  nhapmang(a,n);
  xuatmang(a,n);
  cout<<"Trung binh cong cac so chia het cho 9 va 2: "<<tbcong(a,n);
  
}
