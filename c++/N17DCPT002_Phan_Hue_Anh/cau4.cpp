#include <iostream>
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
void xuatmang(int a[], int n){
	for(int i=0; i<n; i++)
		cout<<a[i]<<" ";
}
int timmax(int a[], int n){
 	int max=a[0];
 	for(int i=1; i<n; i++){
 		 
 		if(a[i]>max)
 			max=a[i];
	 }
	 return max;
}
int timmin(int a[], int n){
 	int min=a[0];
 	for(int i=1; i<n; i++){
 		 
 		if(a[i]<min)
 			min=a[i];
	 }
	 return min;
}



void find(int a[], int n){
	int T = 0;
	for(int i=0; i<n; i++){
		T = T + a[i];
	}
	int tbc = T/n;
	cout<<"\nCac so be <= TBC: ";
	for(int i=0; i<n; i++){
		if(a[i]<=tbc)
			cout<<a[i]<<" ";
	}
	cout<<"\nCac so > TBC: ";
	for(int i=0; i<n; i++){
		if(a[i]>tbc)
			cout<<a[i]<<" ";
	}
}

 int main(){
 	int a[100];
 	int n;
 	nhapmang(a,n);
 	xuatmang(a,n);
 	
 	cout<<"\nphan tu max = "<<timmax(a,n);
 	cout<<"\nphan tu min = "<<timmin(a,n);

 	find(a,n);
 	
 }
