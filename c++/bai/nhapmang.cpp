// Viet ham tinh tong cac phan tu chia het cho 5 co trong mang.

#include<iostream>

#include<time.h>
#include<stdlib.h>
#define MAX 100
using namespace std;

void NhapMang(int a[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<"\nNhap phan tu thu "<< i <<": ";
		cin>>a[i];
	}
}

//void MangNgauNhien(int a[], int n)
//{
//	srand(time(0));
//	for(int i=0; i<n; i++)
//		a[i]=rand()%100 - rand()%100;
//}

void XuatMang(int a[], int n)
{
	for(int i=0; i<n; i++)
		cout<< a[i] <<"\t";
}

int TongPTChiaHet5(int a[], int n)
{
	int tong=0;
	for(int i=0; i<n; i++)
		if(a[i]%5==0)
			tong = tong + a[i];
		return tong;
	return -1;
}

int main()
{
	int a[MAX], i, n, kq;
	
	cout<<"Nhap so luong phan tu thuc: "; cin>>n;
		
	
	
//	MangNgauNhien(a,n);

	XuatMang(a,n);

/*	kq101=TongPTChiaHet5(a,n);
	cout<<"\nTong cac phan tu chia het cho 5 co trong mang la: "<< kq;

	cout<<endl; */
}
