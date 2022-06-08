#include<iostream>
using namespace std;
int main(){
	int h;
	cout<<"Nhap chieu cao h: ";
	cin>>h;
	for(int i=1; i<=h; i++){
		for(int j=1; j<=h; j++){
			if(j==1||i==j||i==h){
				cout<<"* ";
			}
			else 
				cout<<"  ";
		}
		cout<<endl;
	}
}
// bai 102
/*#include<iostream>
using namespace std;
int main(){
	int ng,t,n;
	cout<<"Nhap ngay, thang, nam: ";
	cin>>ng>>t>>n;
	int ntt;
		switch(t){
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			ntt = 31;
			break;
		case 2:
			if(((n%4 == 0)&& (n%100 !=0) || (n%400 == 0))) 
				ntt=29;
			else
				ntt=28;
			break;
		case 4: case 6: case 9: case 11:
			ntt=30;
	}
	ng++;
	if(n)	
}
*/
