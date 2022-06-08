#include<stdio.h>
#include<conio.h>
#define MAX 100
void NhapMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("\nNhap vao phan tu a[%d] = ", i);
		scanf_s("%d", &a[i]);
	}
}
void XuatMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%4d", a[i]);
	}
}
/*
� TUONG: �?ng t? v? tr� hi?n t?i ta s? l�i v? x�t c�c v? tr� tru?c d�
xem gi� tr? c� b? tr�ng hay kh�ng? N?u c� th� b? qua, n?u kh�ng th� 
s? ch?y t? v? tr� d� v? sau d? d?m xem c� bao nhi�u ph?n t? tr�ng v?i n�

*/
int KiemTraBiTrung(int a[], int n, int ViTri)
{
	for (int i = ViTri - 1; i >= 0; i--)
	{
		if (a[i] == a[ViTri])
		{
			return 0;
		}
	}
	return 1;
}

// �?m xem t? v? tr� hi?n t?i tr? v? sau c� bao nhi�u ph?n t? b? tr�ng
int DemSoLuongPhanTuTrung(int a[], int n, int ViTri)
{
	int dem = 1;
	for (int i = ViTri + 1; i < n; i++)
	{
		if (a[i] == a[ViTri])
		{
			dem++;
		}
	}
	return dem;
}

void DemTanSuatXuatHien(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		int CheckTrung = KiemTraBiTrung(a, n, i);
		if (CheckTrung == 1)
		{
			int dem = DemSoLuongPhanTuTrung(a, n, i);
			printf("\nPhan tu %d xuat hien %d lan", a[i], dem);
		}
	}
}
int main()
{
	int n;
	do
	{
		printf("\nNhap vao so luong phan tu cua mang: ");
		scanf_s("%d", &n);
		if (n < 0 || n > MAX)
		{
			printf("\nSo luong phan tu nhap vao khong hop le. Xin kiem tra lai !");
		}
	} while (n < 0 || n > MAX);

	int a[MAX];
	NhapMang(a, n);
	XuatMang(a, n);

	DemTanSuatXuatHien(a, n);

	getch();
	return 0;
}
