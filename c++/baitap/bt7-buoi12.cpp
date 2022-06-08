#include<iostream>
using namespace std;
void nhapmatran(int a[][10],int &n,int &m){
	cout<<"Nhap hang n, m cot: ";
	cin>>n>>m;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cout<<"a["<<i<<"]["<<j<<"]= ";
			cin>>a[i][j];
		}
	}
}

void tongmatran(int a[][10],int b[][10],int c[][10],int n,int m){
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			c[i][j]=a[i][j]+b[i][j];
		}		
	}
}
void xuatmatran(int a[][10], int n,int m){
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
}
int main(){
	int a[10][10],b[10][10],c[10][10];
	int m,n;
	nhapmatran(a,n,m);
	nhapmatran(b,n,m);
	cout<<"Tong 2 ma tran: ";
	tongmatran(a,b,c,n,m);
	xuatmatran(c,n,m);
}

