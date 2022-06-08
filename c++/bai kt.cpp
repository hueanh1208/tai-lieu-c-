/*
#include<iostream>
#include<string>
using namespace std;

int main(){
	int n;
	cout<<"Nhap so nguyen duong n: ";
	cin>>n;
	int S=0;
	int socuoi;
	while(n>0){
		socuoi=n%10;
		if(socuoi%2==0){
			S=S+socuoi;
		}
		n=n/10;
	}
		
	cout<<"Tong cac so chan la: "<<S;
}

#include<iostream>
#include<string>
using namespace std;
void nhap(float a[], int& n){
	cout<<"Nhap n phan tu: ";
	cin>>n;
	for(int i=0; i<n; i++){
		cout<<"Nhap phan tu thu "<<i<<": ";
		cin>>a[i];
	}
	
}
float tinhtich(float a[], int n){
	float tich=1;
	int dem=0;
	for(int i=0;i<n;i++){
		if(1<=a[i]&&a[i]<=2) {
			dem++;}
		
			if(dem<=0){
				tich=0;
			}
			else {
					if(1<=a[i]&&a[i]<=2)
					tich=tich*a[i];
		}		
	
}
	return tich;
}
void FindMaxMin(float a[], int n, float &Max, float &Min){ 
	max=min=a[0];
	for(int i=1; i<n; i++){
		if(a[i]>Max){
			Max=a[i];
		}	
		if(Min>a[i]){
			Min=a[i];
	}
}
	cout<<" Max = "<<Max<<endl;
	cout<<" Min = "<<Min;
}
int main(){
	float a[100];
	int n;
	float max, min;
	nhap(a,n);
	
	cout<<"Tich la: "<<tinhtich(a,n)<<endl;
	FindMaxMin(a,n,max,min);
}
*/
#include<iostream>
#include<string>

using namespace std;
void HoanDoi(string s){
	char c;
	int n=s.length();
	c=s[0];
	s[0]=s[n-1];
	s[n-1]=c;	
	cout<<s;
}
void tim(string s){
	int n=s.length();
	s.replace(s.rfind("chao"),length("chao"),);
}
int main(){
	string s;
	cout<<"Nhap chuoi s: ";
	getline(cin,s);
	HoanDoi(s);
}
