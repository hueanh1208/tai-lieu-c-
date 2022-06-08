#include <iostream>
#include <fstream>
#include <string>
using namespace std;
struct HocSinh{
	string ten,ns,xl;
	float dt,dv, dav, dtb;
};
float Dtb(float dt, float dv, float dav){
	float S= (dt+dv+dav)/3;
	return S;
}
string xeploai(float dtb){
		if(dtb>=8) return "Gioi";
		else if(dtb>=6.5) return "kha";
		else if(dtb>=5) return "trung binh";
		else return "yeu";
	}
void nhap(HocSinh hs[], int&n){
	cout<<"Nhap so hoc sinh can nhap: ";
	cin>>n;
	for(int i=0; i<n; i++){
		cout<<"THONG TIN HOC SINH THU "<<i+1<<endl;
		cin.ignore();
		cout<<"Nhap ho ten: ";
		getline(cin,hs[i].ten);
		cout<<"Nhap ngay sinh: ";
		getline(cin,hs[i].ns);
		cout<<"Nhap diem toan: ";
		cin>>hs[i].dt;
		cout<<"Nhap diem van: ";
		cin>>hs[i].dv;
		cout<<"Nhap diem anh van: ";
		cin>>hs[i].dav;	
		hs[i].dtb=Dtb(hs[i].dt, hs[i].dv, hs[i].dav);
		cout<<"Diem trung binh: "<<hs[i].dtb;
		cout<<endl;
	}
}
void xuat(HocSinh hs[], int n){
	ofstream of;
	of.open("hocsinh.txt");
	of << "Tong so hoc sinh: "<< n << endl;
	of<<"\nSAP XEP THEO DIEM TRUNG BINH TANG DAN";
	for(int i=0; i<n; i++){
		of<<" 	\nHOC SINH THU "<<i+1;
		of<<"	\nHo ten hoc sinh: "<<hs[i].ten;
		of<<"	\nNgay sinh: "<<hs[i].ns;
		of<<"	\nDiem toan: "<<hs[i].dt;
		of<<"	\nDiem van: "<<hs[i].dv;
		of<<"	\nDiem anh van: "<<hs[i].dav;
		of<<"	\nDiem trung binh:"<<hs[i].dtb;
		hs[i].xl=xeploai(hs[i].dtb);
		of<<"	\nXep loai: "<<hs[i].xl<<endl;
	}
	of.close();
}
void sapxeptangdan(HocSinh hs[], int n){
	HocSinh x;
	for(int i=0; i<n-1; i++){
		for(int j=i+1;j<n; j++){
			if(hs[i].dtb>hs[j].dtb){
				x=hs[i];
				hs[i]=hs[j];
				hs[j]=x;
			}
		}
	}
}
int main(){
	HocSinh hs[100];
	int n;
	while(1){
		cout<<"1. Nhap hoc sinh"<<endl;
		cout<<"2. Doc thong tin hoc sinh"<<endl;
		cout<<"3. Thoat"<<endl;
		int m;
		cout<<"\nNhap lua chon: ";
		cin>>m;
		ifstream ifs;
		string s;
		switch(m){
			case 1: 
					nhap(hs,n); 
					xuat(hs,n);
					break;
			case 2: ifs.open("hocsinh.txt");
					if(!ifs){
						cout<<"Chua nhap thong tin"<<endl;
						break;
					}
					else{
						while (getline(ifs, s))
						{
							cout << s << endl;
						}
						ifs.close();
						break;	
					}
			case 3: 
				cout<<"\nThoat chuong trinh";
				return 0;
		}
	}
	
}


