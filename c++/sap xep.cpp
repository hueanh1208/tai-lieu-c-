void SapXepLeTangDan(int a[], int n)
{
	for(int i = 0; i < n - 1; i++)
	{
		if(a[i] % 2 != 0)
		{
			for(int j = i + 1; j < n; j++)
			{
				if(a[j] % 2 != 0 && a[i] > a[j])
				{
					HoanVi(a[i], a[j]);
				}
			}

		}
	}
}
void XoaCacPhanTuTrungVoiX(int a[], int &n, int x)
{
	for(int i = 0; i < n; i++)
	{
		if((a[i]) == x)
		{
			Xoa1PhanTu(a, n, i);
			i--;
		}
	}
}
