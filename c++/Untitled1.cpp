#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <fstream>
#include <iomanip>
#include <mylib.h>

using namespace std;

const int MAX = 100;
const int PgUp = 73;   
const int PgDn = 81;   

void Normal () {
	SetColor(15);
	SetBGColor(0);
}
void HighLight () {
	SetColor(15);
	SetBGColor(2);
}
 struct SV {
	char ms[9] ; char ho[51] ; char ten [11];	
	char malop [9];
	float dhk[6], dtn, dtbck;
	
};
 class DSSV {
	int n;
	SV data [MAX];
	void ShowData ( int i, int amount) ;
	public :
		DSSV () {n=0;}
		int Search( char * );
		int NhapSV ( SV &sv);
		void NhapDSSV ();
		void LietKe ();
		void NhapDiem(char *) ;
		int GhiDSSV ( char *tenfile);
		int LoadDSSV ( char *tenfile);
		
};
void DSSV::NhapDiem(char *mssv) {
	int vt=Search(mssv);
	if (vt==-1) {
	  cout << "Ma so sinh vien " << mssv << " khong co.";
	  return;
	}
	cout << "Ho ten SV : " << data[vt].ho << " " 
	    << data[vt].ten;
	float td =0;
	for (int i=0 ; i<6 ; i++){
		cout << "Diem hoc ky " << i+1 << ":" ;
		cin >> data[vt].dhk[i];
		td+=data[vt].dhk[i];
	}
	cout << "Diem tot nghiep :" ;
	cin >> data[vt].dtn;
	data[vt].dtbck= (td+data[vt].dtn)/7;
	
}
int DSSV::Search( char* x)
{
	for ( int i =0 ; i <n ; i++)
  		if (stricmp(data[i].ms ,x)==0) return i;
	 return -1;
}	

int DSSV::NhapSV (  SV &sv){
	cout << "Ma so SV : " ; cin.getline(sv.ms,8);
	if (strcmp(sv.ms,"")==0) return -1;
	if (Search (sv.ms)>=0) return 0;
	cout << "Ho     : " ; 
	fflush (stdin) ; gets (sv.ho);
	//cin.ignore() ; cin.getline(sv.ho,5);
	cout << "Ten    : " ; fflush (stdin) ; gets (sv.ten);
	cout << "Ma lop : " ; fflush (stdin) ;gets (sv.malop);
	
	return 1;
}
void DSSV::NhapDSSV () {
	SV sv;int err;
	Normal();
	system("cls");
	while (n < MAX) {
		err= NhapSV (sv);
		if (err==-1) return ;
		if (err==0) 
		{
		  cout << "Ma so SV bi trung. Hay nhap lai " << endl;
		  continue;
	    }
	    data[n++]= sv;
	}
}
// CAU LIET KE
void DSSV::ShowData ( int i, int amount) {
	system("cls");
	cout << "                    DANH SACH SINH VIEN " << endl << endl;
	for (int j =i ; j < n && j <i+amount; j++) {
		gotoxy (10, wherey()); cout << data[j].ms ;
		gotoxy (15, wherey()); cout << data[j].ho ;
		gotoxy (35, wherey()); cout << data[j].ten ;
		gotoxy (50, wherey()); cout << data[j].malop << endl;
	}
	gotoxy (10,amount+4); cout << " PgUp - PgDn : lat trang ; ESC - Thoat ";
}
void DSSV::LietKe () {
	const int amount =2;  // 10 nv / page
	int pages = n / amount +1;
	int page =0, i; int kt;
	
	ShowData ( 0,amount);
	do {
		kt=getch();
		if (kt==0) // ma phim mo rong, tuy DevC co the la so 0
		    kt=getch();
		if (kt== PgDn)
			   if (page < pages-1)  
			       {  page++; i=page*amount;
			          ShowData ( i, amount);
			       } 
   
 		if (kt==PgUp)  
		     if (page > 0)  
			       {  page--; i=page*amount;
			          ShowData ( i, amount);
			       } 

	} while (kt !=27);  // ESC thi dung xem
}

int DSSV::GhiDSSV ( char *tenfile) {
	ofstream fout(tenfile,ios::binary);
	for (int i=0 ; i <n ; i++)
	   fout.write((char *)&data[i],sizeof(SV));
	  
	fout.close ();
	return 1;	
}
int DSSV::LoadDSSV ( char *tenfile) {
	char kt;
	ifstream fin(tenfile,ios::binary);
	
   n=0;   SV sv;
   	while (1)
	{
		fin.read((char *)&sv,sizeof(SV)); //doc nv tu file
		if (fin.gcount()==0) break; //neu het file thi thoat while
		data[n++]= sv; 
	}
  
	  
	fin.close ();
	return 1;

}

// Tao menu lenh

const int so_item = 6;
const int dong =1;
const int cot = 2 ;
const int Up = 72;
const int Down = 80;

char thucdon [so_item][50] = {"1. Nhap danh sach sinh vien    ",
			                  "2. Liet ke danh sach sinh vien ",
			                  "3. Ghi file                    ",
			                  "4. Mo file                     ",
							  "5. Nhap diem SV                ",
			                  "6.Ket thuc chuong trinh        "};


int MenuDong(char td [so_item][50]){
  Normal();
  system("cls");   int chon =0;
  int i; 
  for ( i=0; i< so_item ; i++)
  { gotoxy(cot, dong +i);
    cout << td[i];
  }
  HighLight();
  gotoxy(cot,dong+chon);
  cout << td[chon];
  char kytu;
do {
  kytu = getch();
  if (kytu==0) kytu = getch();
  switch (kytu) {
    case Up :if (chon >0)
  			  {
  		        Normal();
              	gotoxy(cot,dong+chon);cout << td[chon];
              	chon --;
              	HighLight();
              	gotoxy(cot,dong+chon); 	cout << td[chon];  				
  			  }
  			  break;
  	case Down :if (chon+1 <so_item)
  			  {
  		        Normal();
              	gotoxy(cot,dong+chon);	cout << td[chon];
              	chon ++;
              	HighLight();
              	gotoxy(cot,dong+chon); 	cout << td[chon];
  				
  			  }
  			  break;
  	case 13 : return chon+1;
  }  // end switch
  } while (1);
}

int main() {
 DSSV ds;  char mssv [10];
  int chon;  
    while  (1) {
        chon = MenuDong (thucdon);
        Normal();
        switch (chon) {
        
        case 1: ds.NhapDSSV();
				break;
        case 2:ds.LietKe();
		         break;
		case 3: if (ds.GhiDSSV("e:/DSSV.dat")==1){
			        gotoxy(20,dong+so_item+2);
		 			cout << endl << "Da ghi DSNV thanh cong";
		 			Sleep (2000);
		 		}
				break;
		case 4: if(ds.LoadDSSV("e:/DSSV.dat")==1){
			        gotoxy(20,dong+so_item+2);
		 			cout << endl << "Da load DSSV thanh cong";
		 			Sleep (2000);
		 		}
				break;
			
		case 5: cout << "MSSV muon nhap diem : " ;
		        gets(mssv); ds.NhapDiem(mssv);
		         break;	
        case so_item  : return 0; 
         }
         
    }
 
 
 return 0;
}
