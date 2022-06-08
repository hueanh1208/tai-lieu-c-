#include<iostream>
#include<string>
using namespace std;
void catChuoi(string s){
	
}
string tim(string s1){
	string s;
	for( int i =0; i<s1.length(); i++){
		if( s1[i] == " "){
			s = s1.substr(0, i);
		}
	}
	return s;
}
// 1 tu trongs1
void sosanh(string s1, string s2){
	string s;
	string s3;
	for( int i =0; i<s2.length(); i++){
		if( s2[i] == " "){
			s = s2.substr(0, i);
			s3=tim(s1);
			if(s.compare(s3) != 0){
				cout<<s3;
			}
		}
	}
}


int main()
{
	string s1,s2;


	
	do{
			cout<<"Nhap chuoi s1: ";
		getline(cin,s1);
	
	}
	while(s1.length()>100);
	do{
			cout<<"Nhap chuoi s2: ";
		getline(cin,s2);
	
	}
	while(s1.length()>100);
	
	sosanh(s1,s2);
	
	
}


