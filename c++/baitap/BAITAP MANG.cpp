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
float timMax(float a[], int n){
	int max=a[0];
	for(int i=0; i<n; i++){
		if(a[i]>max)
			max=a[i];
	}
	return max;		
}
float timMin(float a[], int n){
	int min=a[0];
	for(int i=0; i<n; i++){
		if(a[i]<min)
			min=a[i];
	}
	return min;		
}
int main(){
	float a[100];
	int n;
	nhapmang(a,n);
	cout<<"Gia tri lon nhat la: "<<timMax(a,n);
	cout<<"Gia tri nho nhat la: "<<timMin(a,n);
}

