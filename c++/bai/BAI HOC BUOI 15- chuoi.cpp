#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s,s1,s2;
	cout<<"Nhap chuoi s: ";
	getline(cin,s);
	cout<<"Nhap chuoi s1: ";
	getline(cin,s1);
	cout<<"Nhap chuoi s2: ";
	getline(cin,s2);
	while(s.find(s1)!=string::npos){
		s.replace(s.find(s1),s1.length(),s2);
	}
	cout<<s;
	
	
}

