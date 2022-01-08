#include<iostream>
using namespace std;
void NhapMang(int a[], int &n)
{
    do
    {
        cout << "Nhap n: ";
        cin >> n;
        if(n<=2 || n>50)
            cout << "Nhap lai: ";
    }
    while(n<=2 || n>50);
    for(int i=0; i<n; i++)
    {
        do
        {
            cin >> a[i];
            if(a[i] <= 0 )
                cout<<"Nhap so nguyen duong . Nhap lai"<<endl;
        }
        while(a[i] <= 0);
    }
}
void XuatMang(int a[], int n)
{
    cout <<"\nMang :";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}
int SNT(int n)
{
    for(int i=2; i*i<=n; i++)
        if(n % i == 0)
            return 0;
    return n>1;
}
int TongCacChuSo(int n)
{
    int sum = 0;
    while(n!=0)
    {
        sum+=n%10;
        n /= 10;
    }
    return sum;
}
void SuaCacSoMayMan(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        if(SNT(a[i])==1)
            a[i] = -1;
    }
}
int main()
{
    int a[50],n;
    NhapMang(a, n);
    XuatMang(a, n);
    SuaCacSoMayMan(a, n);
    XuatMang(a, n);
    return 0;
}
