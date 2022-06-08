#include<iostream>
#include<string>
using namespace std;
string caua(string s){
	string s1;
	for(int i=0; i<s.length(); i++){
		s1=s.substr(0, 5);
	}
	return s1;
}
string caub(string s){
	string s1;
	for(int i=s.length(); i>=0;i--){
		s1=s.erase(0,4);
	}
	return s1;
}
string thaythe(string s)
int main(){
	string s;
	cin.ignore();
	cout<<"Nhap chuoi s: ";
	getline(cin,s);
	cout<<"5 ky tu dau tien trong chuoi la: "<<caua(s);
	cout<<"\nchuoi sau khi xoa 4 ki tu cuoi la: "<<caub(s);
}
