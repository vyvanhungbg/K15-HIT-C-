#include <bits/stdc++.h>
using namespace std;
int Check(int n)
{
    n = abs(n);
    int  HangDonVi = n%10;
    n /= 10;
    while(n>0)
    {
        if(n % 10 >= HangDonVi)
            return 0;
        HangDonVi = n % 10;
        n /=10;
    }
    return 1;
}
int main()
{
    int *a,*b ,n =7;        /// KIEM TRA ? <n < ?
    a = new int [n]{1,0,267,255,-125,-88,12};
    b = a;
    for(int i=0;i<n;i++)
        if(Check(*(b+i)))
            cout <<*(b+i) << " ";

    delete []a;
    /// ko delete b vi ko cap phat :)
    return 0;
}

