#include<iostream>
using namespace std;
bool ktnamnhuan(int y){
	if((y%4 == 0)&& (y%100 !=0) || (y%400 == 0))
		return 1;
	else 
		return 0;
} 
int ngaytrongthang(int m,int y){
	int ntt=0;
	switch(m){
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			ntt=31;
			break;
		case 4: case 6: case 9: case 11:
			ntt=30;
			break;
		case 2:
			if(ktnamnhuan(y)==1){
				ntt=29;
				break;
			}
			else 
				ntt=28;
	}
	return ntt;
}


bool kthople(int d, int m, int y){
	if(d<1 && d>ngaytrongthang(m,y))
		return 0;
	if(m<1||m>12)
		return 0;
	if(y<0)
		return 0;	
	return 1;
}
int main(){
	int d,m,y;
	cout<<"Nhap ngay: ";
	cin>>d;
	cout<<"Nhap thang: ";
	cin>>m;
	cout<<"Nhap nam: ";
	cin>>y;
	if(kthople(d,m,y)==0)
		cout<<"hop le";
	else
		cout<<"Ko hop le";
	}
