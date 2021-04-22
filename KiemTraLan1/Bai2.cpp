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
void SapXep(int a[], int n)
{
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i-1;j++)
            if(a[j] < a[j+1])
            {
               int tmp = a[j];
               a[j] = a[j+1];
               a[j+1] =tmp;
            }
}
void XoaChiSoK(int a[], int &n , int k)
{
    for(int i=k;i<n-1;i++)
        a[i] = a[i+1];
    n--;
}
void XoaSoLeAm(int a[], int &n)
{
    for(int i=0;i<n;i++)
        if( a[i]<0 && a[i] % 2 !=0)
        {
            XoaChiSoK(a,n,i);
            i--;
            cout << "hi";
        }
}
int main()
{
    int n=8;
    int a[n] = {2,-1,8,-7,-11,0,1,1};
    SapXep(a,n);
    XuatMang(a,n);
    XoaSoLeAm(a,n);
    XuatMang(a,n);

    return 0;
}
