#include <bits/stdc++.h>
using namespace std;
void NhapMang(int *a, int n)
{
    for(int i=0;i<n;i++)
        cin>>a[i];
}
void XuatMang(int *a, int n)
{
    cout <<"\nMang :";
    for(int i=0;i<n;i++)
        cout <<a[i] << " ";
}
void XoaChiSo(int *&a, int &n, int pos)
{
    if(pos<0 | pos >=n)
    {
        cout << "Khong the xoa ! Loi pos !"<<endl;
        return;
    }

    for(int i = pos;i<n-1;i++)
        a[i] = a[i+1];
    n--;
    a = (int*) realloc(a,n*sizeof(int));
}
void ChenChiSo(int *&a, int &n, int value, int pos)
{
    if(pos<0 || pos >n)
    {
        cout << "Khong the Chen ! Loi pos !"<<endl;
        return;
    }
    n++;
    a = (int*) realloc(a,n*sizeof(int));
    for(int i =n;i>pos;i--)
        a[i] = a[i-1];
    a[pos] = value;
}


/// Sao chep Cac Phan tu am ve dau mang
void SaoChep(int *&a, int &n)
{
    int pos=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            ChenChiSo(a,n,a[i],pos);
            pos++;
            i++; /// duoi kip phan tu chen vao dau

        }
    }
}
void XoaChan(int *&a, int &n)
{
    for(int i=0;i<n;i++)
        if(a[i]%2==0)
        {
            XoaChiSo(a,n,i);
            i--;
        }
}
int main()
{
    int *a,n=7; /// KIEM TRA ? <n < ?
    a = new int [n]{1,-12,26,3,0,-8,12};
    XuatMang(a,n);
    SaoChep(a,n);
    XuatMang(a,n);
    XoaChan(a,n);
    XuatMang(a,n);


    delete []a;
    return 0;
}
//a = (int*) realloc(a,n*sizeof(int));
