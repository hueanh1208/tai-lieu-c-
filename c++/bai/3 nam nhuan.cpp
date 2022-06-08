// bai 15
#include<iostream>
using namespace std;
int main(){
	int n;
	float s=0,k=0;
	cout<<"Nhap n: ";
	cin>>n;
	for(int i=1; i<=n; i++){
		k=k+i;
		s=s+1/k;
	}
	cout<<"tong la: "<<s;
}
