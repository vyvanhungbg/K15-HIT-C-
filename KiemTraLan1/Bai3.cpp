#include <iostream>
using namespace std;
void NhapMang(float a[], int n)
{
    for(int i=0; i<n; i++)
        cin>>a[i];
}
void XuatMang(float a[], int n)
{
    cout <<endl;
    for(int i=0; i<n; i++)
        cout << a[i]<< " ";
}
void ChenChiSoK(float a[], int &n, int k , int b)
{
    for(int i=n;i>k;i--)
        a[i] = a[i-1];
    a[k] = b;
    n++;
}
int CheckSNT(int n)
{
    for(int i=2;i*i<=n;i++)
        if(n % i ==0)
            return 0;
    return n>1;
}
void ChenbTruocSNT(float a[], int &n , int b)
{
    if(CheckSNT(b))
        cout << "\nb = "<<b << " la so nguyen to nen khong the chen !"<<endl;
    else
    {
        for(int i=0;i<n;i++)
        if(CheckSNT(a[i]))
        {
            ChenChiSoK(a,n,i,b);
            i++;
        }
        XuatMang(a,n);

    }

}
void TBDK(float a[], int n)
{
    float tong =0;
    int dem=0;
    for(int i=0;i<n;i++)
        if(a[i]>10)
        {
            tong+=a[i];
            dem++;
        }
    cout << "\nTBC so long hon 10 : "<< tong/dem<<endl;
}
int main()
{
//    int n;
//    cin>>n;
//    float a[n];
//    NhapMang(a,n);
//    XuatMang(a,n);
    int n=6;
    float a[n] = {3, 5, 1, 100, 4.5, 13 };
    XuatMang(a,n);
    ChenbTruocSNT(a,n,9);

    TBDK(a,n);
    return 0;
}
