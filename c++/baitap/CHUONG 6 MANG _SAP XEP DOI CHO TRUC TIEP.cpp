#include<iostream>
#include<cmath>
using namespace std;
void NhapMang(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;

	cout << "Nhap mang:\n";
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]= ";
		cin >> a[i];
	}
}

void HoanDoi(int& a, int& b)
{
	int c = a;
	a = b;
	b = c;
}

void DoiChoTrucTiep(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])
				HoanDoi(a[i], a[j]);
		}
	}
}

void XuatMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
}

int main()
{
	int a[100], n;
	NhapMang(a, n);
	DoiChoTrucTiep(a, n);
	cout << "\nMang sau sap xep: ";
	XuatMang(a, n);
}

