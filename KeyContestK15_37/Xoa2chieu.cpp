#include <bits/stdc++.h>
using namespace std;
void Matrix(int a[20][20], int m ,int n)
{

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }

    }

}
void Show(int a[20][20], int m, int n)
{
    cout <<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            cout << a[i][j] << " ";
        cout <<endl;
    }
}

void XoaCotK(int a[20][20], int m, int &n ,int k)
{
    for(int i=0;i<m;i++)
    {
        for(int j=k;j<m;j++)
        {
            a[i][j] = a[i][j+1];
        }

    }
    n--;

}
void XoaDongK(int a[20][20] , int &m , int n, int k)
{
   for(int i=k;i<m-1;i++)
    {
        for(int j=0;j<n;j++)
            a[i][j] = a[i+1][j];
    }
    m--;



}
long tong(int a[20][20] , int m , int n)
{
   long tong=0;
   for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            tong += a[i][j];
        }

    }
    return tong;
}
void Nhap(int a[20][20] , int m , int n)
{
    srand(time(NULL));
	for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
             a[i][j] = 0;
        }

    }

}

int main()
{
    int a[20][20] ,  m=9 ,  n= 3;
    cin>>m>>n;
    //Nhap(a,m,n);
    Matrix(a,m,n);
    //Show(a,m,n);
    int k = abs(tong(a,m,n))%n;
    XoaDongK(a,m,n,k);
    XoaCotK(a,m,n,k);
    Show(a,m,n);

    return 0;

}
