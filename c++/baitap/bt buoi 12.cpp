/*
//bai 33
#include<iostream>
#include<math.h>
using namespace std;
float tong(int n){
	float S=sqrt(2);
	for(int i=2; i<=n; i++){
		S=sqrt(2+S);
	}
	return S;	
}
int main(){
	int n;
	cout<<"Nhap n(n>0): ";
	cin>>n;
	cout<<"tong la: "<<tong(n);
}*/
/*
//bai 34
#include<iostream>
#include<math.h>
using namespace std;
float tong(int n){
	float S=0;
	for(int i=1;i<=n;i++){
		S=sqrt(i+S);
	}
	return S;
}
int main(){
	int n;
	cout<<"Nhap n(n>0): ";
	cin>>n;
	cout<<"tong la: "<<tong(n);
}*/
/*
// bai 35
#include<iostream>
#include<math.h>
using namespace std;
float tong(int n){
	float S=0;
	for(int i=n; i>0 && i<=n;i--){
		S=sqrt(i+S);
	}
	return S;
}
int main(){
	int n;
	cout<<"nhap n(n>0): ";
	cin>>n;
	cout<<"tong la: "<<tong(n);
}*/
/*
//bai 104
#include<iostream>
using namespace std;
int timngaythubaonhieutrongnam(int d, int m, int y){
	int tong = d;
	for(int i = 1; i < m; i++)
	{
		switch (i)
		{
			case 4: case 6: case 9 : case 11: 
				tong+= 30; 
				break;
			case 2: 
				if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0){
						tong+=28;
						break;
					}
					else 
						tong+=29;
						break;
			default: tong += 31;
		}
	}
	return tong;
}
int main(){
	int d,m,y;
	cout<<"Nhap d,m,y: ";
	cin>>d>>m>>y;
	cout<<"ngay "<< d <<"/"<<m<<"/"<<y<<" la ngay thu " <<timngaythubaonhieutrongnam(d,m,y)<<" trong nam";
}*/

/*
// bai giai chua xog
#include<iostream>
using namespace std;
void tong(){
	int i,j,k;
	int s;
	for(int i=0; i<=200;++i)
		for(int j=0; j<=100; ++j)
			for(int k=0; k<=40; ++k)
				s=i*200+j*100+k*40;
				if(s==200000)
					cout<<i<<"to 1000 "<<j<<"to 2000"<<k<<"to 5000";				
}
int main(){
	tong();
}
*/
// tam giac can dac
/*
#include<iostream>
using namespace std;
void vetamgiac(int n){
	for(int i=1; i<=n; i++){
		for(int j=1; j<=2*n-1; j++){
			if((j>=n-i+1 )&& (j<=n+i-1) )
				cout<<"*";
			else
				cout<<" ";
		}
		cout<<endl;
	}
	
}
int main(){
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	vetamgiac(n);
}*/

//bai 111b
#include<iostream>
using namespace std;
void vetamgiac(int n){
	for(int i=1; i<=n; i++){
		for(int j=1; j<=2*n-1; j++){
			if(j==n-i+1 || j==n+i-1 || i== n)
				cout<<"*";
			else
				cout<<" ";
		}
		cout<<endl;
	}
	
}
int main(){
	int n;
	cout<<"Nhap n: ";
	cin>>n; 
	vetamgiac(n);
}






















