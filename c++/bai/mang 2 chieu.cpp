#include<iostream>
using namespace std;
void nhapMaTran(int A[][100], int h, int c){

	for(int i=0; i<h; i++)
		for(int j=0; j<c; j++){
			cout << "Ma tran thu [" << i << "][" << j << "]: ";
			cin>>A[i][j];
		}
}
void xuatMang(int A[][100], int h, int c)
{
	for (int i = 0; i < h; ++i)
	{
		for (int j = 0; j < c; ++j)
		{
			cout << " " << A[i][j] << " ";
		}
		cout << endl;
	}
}
int Tong(int A[max][max], int B[max][max], int C[max][max], int ha, int ca,int hb, int cb){
	if( ha!=hb || ca!=cb)
		cout<<"Hai ma tran khong thoa tinh chat cua CONG MA TRAN!";
 	else{
		for (int i = 0; i < h; i++)
	      	for (int j = 0; j < c; j++)
	      		C[i][j]= B[i][j] + A[i][j];
	      	}
}
int main(){
	int max = 100;
	int A[max][max]; 
	int B[max][max];
	int c[max][max];
	int h,c;
	cout<<"Nhap so hang: ";
	cin>>h;
	cout<<"Nhap so cot: ";
	cin>>c;
	cout<<"Ma tran A: "<<endl;
	nhapMaTran(A,h,c);
	xuatMang(A,h,c);
	cout<<"Ma tran B: "<<endl;
	nhapMaTran(B,h,c);
	xuatMang(B,h,c);
	cout<<"Tong cac phan tu: "<<Tong()
	
	
	
}
