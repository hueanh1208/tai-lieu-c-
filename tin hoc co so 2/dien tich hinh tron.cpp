#include <iostream>

using namespace std;

float dientich(int n){
	do{ 
	 cout<<"Nhap ban kinh: ";
	 cin>>n;
	}
	while(n<0);
	
	float dt;
	dt = n*n*3.14;
	return dt;
}
int main(){
	 int n;
	 cout<<"Dien tich hinh tron = "<<dientich(n);

}
