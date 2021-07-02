#include <bits/stdc++.h>
using namespace std;
long long fibonaci3(int n) /// cau 5 cach 3  // khong phai de quy :( day cho la 1,  1,   2   ,3,5... n>=0
{

    long long soTruocNua=1,soTruoc =1,soHienTai=2;
    if(n<2) return 1;

    for(int i=1;i<n;i++)
    {
        soHienTai = soTruoc+soTruocNua;

        soTruocNua = soTruoc;

        soTruoc = soHienTai;
    }

    return soHienTai;
}
void NhiPhan(long long n)  /// Doi sang he nhi phan so nguyen duong n
{
    if(n<1) return;
    else
    {
        NhiPhan(n/2);
        cout <<n%2;
    }
}
long long fibo(int n)
{
    if(n==0 || n ==1) return 1;
    return fibo(n-1) + fibo(n-2);
}
int main()
{
    int n ;
    cin >>n;
    NhiPhan(fibonaci3(n));
    return 0;
}
