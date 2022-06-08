/*
bai1
#include<iostream>
using namespace std;
int tong(int n){
	int S=0;
	for(int i=0; i<=n; i++){
		S=S+i*i;
	}
	return S;
}
int main(){
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	cout<<"Tong la: "<<tong(n);
}*/
/*
bai 2
#include<iostream>
using namespace std;
float tong(int n){
	float S= 0;
	for(int i=1; i<=n; i++){
		S=S+1/(float)i;
	}
	return S;
}
int main(){
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	cout<<"Tong la: "<<tong(n);
}*/
/*
bai 3 
#include<iostream>
using namespace std;
float tong(int n){
	float S=0;
	for(float i=1; i<=n; i++){
		S=S+i/(i+1);
	}
	return S;
}
int main(){
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	cout<<"tong la: "<<tong(n);
}*/
/*
bai 4
#include<iostream>
using namespace std;
int tong(int n){
	int S=0, socuoi;
	while(n>0){
		socuoi=n%10;
		S=S+socuoi;
		n=n/10;
	}
	return S;	
}
int main(){
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	cout<<"tong la: "<<tong(n);
}*/

//bai 5
/*
#include<iostream>
using namespace std;
float  timmax(float a, float b, float c){
	float max =a;
	if(b>a)
		max =b;
	if(c>b)
		max= c;
	return max;
}
int main(){
	float a,b,c;
	cout<<"Nhap a,b,c: ";
	cin>>a>>b>>c;
	cout<<"So lon nhat la: "<<timmax(a,b,c);
}*/
/*
// bai 6
#include<iostream>
using namespace std;
int songay(int m, int y){
	int ntt;
	switch(m){
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			ntt = 31;
			break;
		case 2:
			if(((m%4 == 0)&& (m%100 !=0) || (m%400 == 0))) 
				ntt=29;
			else
				ntt=28;
			break;
		default: ntt = 30;
		}
		return ntt;
}
int main(){
	int m,n;
	cout<<"Nhap thang, nam: ";
	cin>>m>>n;
	cout<<"So ngay la: "<<songay(m,n);
}
*/

//bai 7
/*
#include<iostream>
#include<cmath>
using namespace std;
bool ktsont(int n){
	if (n<=1)
		return false;
	else
	{
		for (int i = 2; i <= sqrt(n); i++)
			if (n % i == 0)
				return false;
	return true;
	}
}
int main(){
	int n,i;
	cout<<"Nhap n: ";
	cin>>n;
	cout<<"So nguyen to tu 1 den "<< n<<" la: "<<endl;
	for(int i=1; i<=n; i++){
		if(ktsont(i)==true)
			cout<<i<<endl;
	}
}
*/










