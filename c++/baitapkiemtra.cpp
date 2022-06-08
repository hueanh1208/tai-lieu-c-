#include<iostream>
using namespace std;
void nhap(int a[],int &n){
	cout<<"Nhap so phan tu: ";
	cin>>n;
	for(int i=0; i<n; i++){
		cout<<"a["<<i<<"]= ";
		cin>>a[i];
	}
}

void solechiahetcho3va5(int a[], int n){
	for(int i=0; i<n; i++){
		if(a[i]/2!=0 ){
			if(a[i]%3==0 && a[i]%5==0){
				cout<<a[i]<<" ";
		}
	}
}
}

float trungbinhcong(int a[], int n){
	float S=0;
	int dem=0;
	for(int i=0; i<n; i++){
		if(a[i]%2==0){
			dem++;
			if(dem>0){
				S=(S+a[i])/dem;
		}
	}
	return S;
}
}
int timMaxMin(int a[], int n){
	int max=a[0];
	int min=[0];
	for(int i=1, i<n; i++){
		if(a[i]>max)
			max=a[i];
		if(a[i]<min);
			min=a[i];	
	}
	
}
int main(){
	int a[100];
	int n;
	nhap(a,n);
	cout<<"So le chia het cho 3 va 5 la: ";
	solechiahetcho3va5(a,n);
	cout<<"\nTrung binh cong la: "<<trungbinhcong(a,n);
	
	
}
