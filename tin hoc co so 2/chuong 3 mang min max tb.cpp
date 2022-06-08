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
float timmax(float a[], int n){
 	int max=a[0];
 	for(int i=1; i<n; i++){
 		 
 		if(a[i]>max)
 			max=a[i];
	 }
	 return max;
}
float timmin(float a[], int n){
	float min=a[0];
	for(int i=1; i<n; i++){
		
		if(a[i]<min)
			min=a[i];
	}
	return min;
}
float trungbinh(float a[], int n){
	float tong=0;
	for(int i=0;i<n; i++){
		tong=tong+a[i];
	}
	float tb=tong/n;
	return tb;
}
int main(){
	float a[100];
	int n;
	nhapmang(a,n);
	cout<<"So lon nhat la: "<<timmax(a,n);
	cout<<"\nSo nho nhat la: "<<timmin(a,n);
	cout<<"\nTrung binh day so la: "<<trungbinh(a,n);
}
