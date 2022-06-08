
#include<iostream>
#include<time.h>
#include<cstdlib>
using namespace std;

void nhapMang(int a[], int &n)
{
	cout << "Nhap so luong phan tu n : ";
	cin >> n;
	srand(time(0));
	for(int i=0; i<n; i++)
		a[i]=rand()%100;
}

void xuatmang(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout<<a[i]<<" ";
		
}
void daonguocchieu(int a[],int n)  
{
	for(int i=n-1; i>=0; i--)
		cout<<a[i]<<" ";
}
int main(){
	int a[100], n;
	nhapMang(a,n);
	xuatmang(a,n);
	cout<<"\nMang dao nguoc la: ";
	daonguocchieu(a,n);
}

#include<iostream>
using namespace std;
void nhapmang(int a[], int& n){
	cout<<"Nhap n: ";
	cin>>n;
	cout<<"Nhap mang:\n";
	for(int i=0; i<n; i++){
		cout<<"a["<<i<<"]= ";
		cin>>a[i];
	}
}
void XuatMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
}
int kiemtramangdoixung(int a[],int n){
	for(int i=0; i<n/2; i++){
		if(a[i]=a[n-i-1])
			return 1;
	}
	return 0;
}
int main(){
	int a[100], n;
	nhapmang(a,n);
	if(kiemtramangdoixung(a,n)==1)
		cout<<"Mang doi xung";
	else 	
		cout<<"Mang khong doi xung";
}

#include<iostream>
using namespace std;
void nhapmang(int a[], int& n){
	cout<<"Nhap n: ";
	cin>>n;
	cout<<"Nhap mang:\n";
	for(int i=0; i<n; i++){
		cout<<"a["<<i<<"]= ";
		cin>>a[i];
	}
}
void xuatmang(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
}
void sapxeptangdan(int a[], int n){
	int x;
	for(int i=0; i<n-1; i++)
		for(int j=i+1; j<n; j++){
			if(a[i]>a[j]){
				x=a[i];
				a[i]=a[j];
				a[j]=x;
			}
		}
}

int timnhiphan(int a[] , int n , int x)
{
    int l = 0 , r = n - 1 , m;
    while (l<=r)
    {
    	m = (l+r)/2;
        if(a[m] == x)
        	return m;
        if(a[m]<x)
        	l = m+1;
        else
        	r = m-1;
    }
    return -1;
}

 
int main(){
	int a[100], n,x;
	nhapmang(a,n);
	sapxeptangdan(a,n);
	xuatmang(a,n);
	cout<<"\nNhap x: ";
	cin>>x;
	 
    if ( timnhiphan(a,n,x) == -1)
    	cout<<timnhiphan(a,n,x);
    else
        cout<<"Tim duoc phan tu x tai vi tri: "<<timnhiphan(a,n,x);
}

