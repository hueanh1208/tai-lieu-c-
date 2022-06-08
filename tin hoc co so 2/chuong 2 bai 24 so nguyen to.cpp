
#include <iostream>
#include <cmath>
using namespace std;
int ktsnt(int n){
	if(n<=1){
		return 0;
	}
	else {
		for(int i=2; i<=sqrt(n); i++)
		{
			if(n%i == 0)
				return 0;
		}
	return 1;
	}
}

void insnt(int n){
	int dem=0;
	int i=2;
	while(dem<n){
		if(ktsnt(i)){
			cout<<i<<" ";
			dem++;
		}
		i++;
	}
}

int main(){
	int n;
	do{
		cout<<"Nhap n = ";
		cin>>n;
	}
	while(n<=0);
	if(ktsnt(n)==1)
		cout<<n<<"\n la so nguyen to"<<endl;
	else
		cout<<n<<"\n ko la so nguyen to"<<endl;	
	cout<<n<<" so nguyen to dau tien la: ";
	insnt(n);
}


