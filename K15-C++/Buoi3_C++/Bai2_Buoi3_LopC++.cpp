#include <iostream>
#include <math.h>
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

int CheckSCP( int n)
{
    return n > 0 ? int(sqrt(n)) == sqrt(n) : 0; // so am thi sai , khong thi check so duong
}

void XoaChiSoK(int a[], int &n, int k)
{
    for(int i=k; i<n-1;i++)
        a[i] = a[i+1];
    n--;
}
void SapXep(int a[], int n)
{
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i-1;j++)
            if(a[j] > a[j+1])
                swap(a[j], a[j+1]);
}
void ThucThi(int a[], int &n)
{
    int check = n;
    for( int i=0;i<n;i++)
        if(!CheckSCP(a[i]))
        {
            XoaChiSoK(a,n,i);
            i--;
        }
    if(check == n)   // neu so luong phan tu trong mang giam (co so k phai scp) thi khong sap xep
        SapXep(a,n);
}
int main()
{
//    int n;
//    do
//    {
//        cout << "Nhap n : ";cin>>n;
//        if(n <= 3 || n >= 100)
//            cout << "\nNhap Sai !"<<endl;
//    }while(n <= 3 || n >= 100);
//    int a[n];
//    NhapMang(a,n);
//    XuatMang(a,n);
    int a[8] = {4,1,16,1,64,9,25,81};
    int n=8;
    XuatMang(a,n);
    ThucThi(a,n);
    XuatMang(a,n);
    return 0;
}
