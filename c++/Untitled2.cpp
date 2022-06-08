#include<iostream>
using namespace std;
int main(){
	int n;
	do{
		cout<<"Nhap n: ";
		cin>>n;
	}
	while(n<0);
	float S=0;
	for(int i=0; i<n;i++){
		S+=(2*(float)i+1)/(2*i+2);
	}
	cout<<"Tong la: "<<S;
}
