#include<iostream>
#include<cmath>
using namespace std;
void NhapMang(int a[], int& n){
	cout << "Nhap n: ";
	cin >> n;

	cout << "Nhap mang:\n";
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]= ";
		cin >> a[i];
	}
}
void chen(int a[], int& n){
	int x,k;
	cout<<"Nhap vao x,k: ";
	cin>>x>>k;
	for(int i=n; i>k; i--)
	{
		a[i]=a[i-1];
	}
	a[k]=x;
	n++;
}
void x(int a[], int& n, int k){
	for(int i=k; i<n-1;i++){
	a[i]=a[i+1];
	}
	n--;
}
void xoa(int a[], int& n){
	for(int i=n-1; i>=0; i--)
	{
		if(a[i]%3==0)
		x(a,n,i);
	}
}
void XuatMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
}
int main(){
	int a[100], n;
	NhapMang(a, n);
	xoa(a,n);
	XuatMang(a,n);
}
