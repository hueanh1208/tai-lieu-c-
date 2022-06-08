#include <iostream>
#include <fstream>
using namespace std;

void NhapMang(float a[], float& n)
{
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap day so: ";
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

int main() 
{
	float a[100];
	float n;
	NhapMang(a, n);

	ofstream of;
	of.open("daysothuc.txt");
	of << n << endl;

	for (int i = 0; i < n; i++)
		of << a[i] << " ";

	of.close();
}

