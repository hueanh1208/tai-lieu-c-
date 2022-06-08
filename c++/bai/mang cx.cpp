#include<iostream>
using namespace std;
void nhapmang(float a[], int& n){
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
void XuatMang(float a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
}
float timMax(float a[], int n){
	int max=a[0];
	for(int i=1; i<n; i++){
		if(a[i]>max)
			max=a[i];
	}
	return max;		
}
float timMin(float a[], int n){
	int min=a[0];
	for(int i=1; i<n; i++){
		if(a[i]<min)
			min=a[i];
	}
	return min;		
}
void chen(float a[], int n){
	int x,k;
	cout<<"/nNhap x,k: ";
	cin>>x>>k;
	for(int i=n; i>=k; i--){
		a[i]=a[i-1];
	}
	a[k]=x;
	n++;
}
void xoaPt(float a[], int n){
	for(int i=k; i<n-1; i++){
		a[i]=a[i+1];
	}
	n--;
}
void xoa(float a[], int n){
	for(int i= n-1; i>=0; i--)
		if(a[i]%3==0)
			xoaPt(a
	
}

int main(){
	float a[100];
	int n;
	nhapmang(a,n);
	cout<<"Gia tri lon nhat la: "<<timMax(a,n);
	cout<<"\nGia tri nho nhat la: "<<timMin(a,n);
	chen(a,n);
	XuatMang(a,n);
}

