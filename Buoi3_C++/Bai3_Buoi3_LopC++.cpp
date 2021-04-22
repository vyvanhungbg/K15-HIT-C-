#include <iostream>
using namespace std;
void NhapMang(int a[], int n)
{
    for(int i=0; i<n; i++)
        cin>>a[i];
}
void XuatMang(int a[], int n)
{
    cout <<endl;
    for(int i=0; i<n; i++)
        cout << a[i]<< " ";
}
int CheckSHH(int n)
{
    int TongUoc=0;
    for(int i=1;i*i<=n;i++)
        if(n % i ==0)
            TongUoc = TongUoc + i + n/i;
    if(TongUoc == 2*n)
        return 1;
    return 0;
}

void XoaChiSoK(int a[], int &n, int k)
{
    for(int i=k; i<n-1;i++)
        a[i] = a[i+1];
    n--;
}
void XoaSoLe(int a[], int &n)
{
    for(int i=0;i<n;i++)
    {
        if(a[i] % 2 ==1)
        {
            XoaChiSoK(a,n,i);
            i--;
        }
    }

}
int KhoangCach(int a[], int n)
{
	int Min = a[0], Max = a[0];
	for(int i=1; i<n; i++)
    {
		if(Max < a[i])
			Max = a[i];
		if(Min > a[i])
			Min = a[i];
	}
	return Max - Min;
}
void ThucThi(int a[], int &n)
{
    int i;
    for( i=0;i<n;i++)
        if(!CheckSHH(a[i]))
            break;
    if(i != n-1)
    {
        XoaSoLe(a,n);
        XuatMang(a,n);
    }
    else
        cout << "Khoang cach xa nhat : "<<KhoangCach(a,n)<<endl;
}
int main()
{
//    int n;
//    do
//    {
//        cout << "Nhap n : ";cin>>n;
//        if(n < 3 || n > 100)
//            cout << "\nNhap Sai !"<<endl;
//    }while(n < 3 || n > 100);
//    int a[n];
//    NhapMang(a,n);
//    XuatMang(a,n);
    int a[5] = {6,28,496, 8182,1};
    int n=5;
    ThucThi(a,n);
    return 0;
}
