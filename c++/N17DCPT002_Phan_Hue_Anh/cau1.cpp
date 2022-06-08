#include <iostream> 
using namespace std; 
 
bool isThuanNghich(int n) {
    int a[20];
    int dem = 0, i;
    do {
        a[dem++] = n % 10;
        n = n / 10;
    } while (n > 0);
    
    for (i = 0; i < dem/2; i++) {
        if (a[i] != a[(dem - i - 1)]) {
            return false;
        }
    }
    return true;
}
int main(){
    int count = 0;
    cout<<"Cac so thuan nghich tu 150 den 200: ";
    for (int i = 150; i <= 200; i++) {
        if (isThuanNghich(i)) {
            cout<<i<<" ";
            count++;
        }
    }
    cout<<"\nSo luong cac so thuan nghich tu 151 den 200 la: "<<count;
}
