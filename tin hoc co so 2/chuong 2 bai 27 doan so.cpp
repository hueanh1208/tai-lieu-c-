#include <iostream>
#include <ctime>
#include<cstdlib>
using namespace std;
void kt(int n){
	srand(time(0));
	int machine = rand()%100 + 1;
	int i=0;
	int tmp=0;
	cout<<"Tro choi doan so"<<endl;
	cout<<"Ban co 5 luot doan"<<endl;
	while(i<5){
		cout<<"Moi nguoi choi nhap so(n>0 && n<100) = ";
		cin>>n;
		if(n>machine){
			cout<<"Ban doan lon hon"<<endl;
			i++;
			tmp++;
		}
		else if (n==machine){
			cout<<"Ban doan dung"<<endl;
			break;
		}
		else{
			cout<<"Ban doan nho hon "<<endl;
			i++;
			tmp++;
		}
		if(tmp==5)
			cout<<"May thang cuoc"<<endl;
	
	}
	
	cout<<"machine = "<<machine<<endl;
}
int main(){
	int n;
	kt(n);	
}
