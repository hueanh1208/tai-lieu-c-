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
				cout<<" ";
		}
		cout<<endl;
	}
}
