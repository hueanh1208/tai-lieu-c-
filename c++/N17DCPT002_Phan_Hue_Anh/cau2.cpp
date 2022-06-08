#include <iostream>
using namespace std;

int main() {
   int n;
 
   cout<<"Nhap n: ";
   cin>>n;
 
   cout<<("Ve tam giac sao vuong can:\n");
   for(int i = n; i >= 1; i--) {
      	for(int j = 1; j <= i; j++)
         	cout<<("1 ");
      	cout<<("\n");
   }
    
   return 0;
}
