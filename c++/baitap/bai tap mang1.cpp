#include<iostream>
#include<math.h>
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
void xuatmang(float a[], int n){
	for(int i=0; i<n; i++)
		cout<<a[i]<<" ";
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
int vitrixdautien(float a[], int n, int x){
	int vt=-1;
	for (int i = 0; i < n; i++){
		if(a[i]==x)
		{
			vt=i;
			break;
		}
	}
	return vt;
}
int vitrixcuoicung(float a[], int n, int x){
	for (int i = 0; i < n; i++){
		if(a[i]==x)
		{
			return i;
		
		}
	}
	return -1;
}/*
int vitrixcuoicung(float a[], int n, int x){
	int vt=-1;
	for (int i = n-1; i<=n; i--){
		if(a[i]==x){
			vt=i;
			break;
		}
	}
	return vt;
}*/
//cau 4a
bool ktsnt( int n){
	if(n<=1)
		return 0;
	else{
		for (int i = 2; i <= sqrt(n); i++){
			if(n%i==0)
				return false;
		}
	}
	return true;
}
int snt( float a[], int n){
	int max= 0;
	for (int i = 0; i < n; i++) {
        if (a[i] > max && ktsnt(a[i]))
            max = a[i];
    }
    if( max == 0 )
        return 0;
    else
        return max;
}
// cau 4b
int timsodoixung(int n){
	int sodoi=0;
	int socuoi;
	while(n>0){
	 	socuoi = n%10;
	 	sodoi = (sodoi*10)+socuoi;
	 	n = n/10;
	}
	return sodoi;
}
 void ktsdx(float a[], int n){
	for(int i=0; i<n; i++){
		if(timsodoixung(a[i]) == a[i])
			cout<<a[i]<<" ";
		}
}

// cau 4c
void tangdan(float a[], int n){
	int dem=0;
	for (int i = 0; i < n-1; i++){
		if(a[i]<a[i+1])
			dem++;	
	}
	if(dem==n-1)
		cout<<"Day so tang dan";
	else 
		cout<<"Day so khong tang dan";
}
// cau 4d
void sapxepgiamdan(float a[], int n){
	int x;
	for(int i=0; i<n-1; i++)
		for(int j=i+1; j<n; j++){
			if(a[i]<a[j]){
				x=a[i];
				a[i]=a[j];
				a[j]=x;
			}
		}
}

int main(){
	float a[100];
	int n;
	nhapmang(a,n);
	cout<<"So lon nhat la: "<<timmax(a,n);
	cout<<"\nSo nho nhat la: "<<timmin(a,n);
	//cau3
	int x;
	cout<<"\nNhap x: ";
	cin>>x;
	cout<<"Vi tri x dau tien  : "<<vitrixdautien(a,n,x);
	cout<<"\nVi tri x cuoi cung : "<<vitrixcuoicung(a,n,x);
	 if (snt(a, n) == 0)
        cout << "Mang khong ton tai so nguyen to";
    else
        cout << "So nguyen to lon nhat trong mang la: " << snt(a, n);
   // cout<<"So doi la: "<<ktsdx(a,n);
    sapxepgiamdan(a,n);
    cout<<"Mang sap xep giam dan: ";
    xuatmang(a,n);
	cout<<"So dao la: ";
	ktsdx(a,n);

    
    
}
