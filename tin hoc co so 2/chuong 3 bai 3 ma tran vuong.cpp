#include <iostream>
#include <string>
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
int Tongpt(int A[][100],int h,int c){
	int tong=0;
		for (int i = 0; i < h; i++)
	      	for (int j = 0; j < c; j++)
	      		tong= tong + A[i][j];
	return tong;    
	      	
}
int main(){
	string A[100][100]; 
	int h;
	cout<<"Nhap ma tran vuong co kich thuoc n = ";
	cin>>h;
	int c=h;
	cout<<"Ma tran A: "<<endl;
	nhapMaTran(A,h,c);
	xuatMang(A,h,c);
	cout<<"Tong cac phan tu: "<<Tongpt(A,h,c);
	
	
	
}
