/*#include<iostream>
using namespace std;
int tong(int n){
	int S=0;
	for(int i=1; i<=n; i++){
			S = S+i;	
	}
	return S;
}
int main(){
	int n=5;
	int Tong=tong(n);
	cout<<Tong;
}*/
#include<iostream>
using namespace std;
void Hoandoi(int &a, int &b){
	int c=a;
	a=b;
	b=c;
}
int main(){
	int x=5;
	int y=7;
	Hoandoi(x,y); 
	cout<<"x = "<< x <<", y ="<<y;
}
#include<iostream>
using namespace std;

int main(){

}

