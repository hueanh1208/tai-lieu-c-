

// bai 4
#include<iostream>
#include<string>
using namespace std;
int vitricuoi(string s,string s1){
	int vt =s.rfind(s1);
	return vt;
}
string thaythe(string s, string s2){
	string kq="";
	kq=s.replace(0,5,s2);
	return kq;		
}
string xoachuoi(string s){
	string kq="";
	kq=s.erase(s.length()-4, 4 );
		return kq;
}
string thaythechao(string &s,string s1, string s2){
	string kq="";
	int pos=s.find(s1);
	int len=s1.length();
		while(pos!=string::npos){
			kq=s.replace(pos,len,s2);
			pos=s.find(s1);
		}
	
 	return kq;
}
int main()
{
	string s;
	string s2="hello";
	string s1="chao";
	cout <<"Nhap chuoi: ";
	getline(cin, s);
	if(vitricuoi(s,s1)==string::npos)
		cout<<"Khong tim thay";
	else 
		cout<<"vi tri "<<s1<<" cuoi: "<<vitricuoi(s,s1);
	cout<<"\nThay the 5 ki tu dau: "<<thaythe(s,s2);
	cout<<"\nXoa 4 ki tu cuoi: "<<xoachuoi(s);
	cout<<"\nThay the chao thanh hello: "<<thaythechao(s,s1,s2);
}

