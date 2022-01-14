#include <iostream>
#include <math.h>  // dung pow
#include <iomanip>  // dung setpre
using namespace std;
void BieuThuc(int n, float x)
{
    float L=2021;
    if(x == 0 || (n%2 ==0 && x <0))
    {
        cout << "x khong the bang "<<x<< " voi bieu thuc nay !";
        return;
    }
    if (n%2 == 0)
    {
        L= fabs(((log(x)/log(2)))+exp(n)+2021);
    }
    else
    {
        for (int i=1; i<=n; i++)
        {
            L = L + (2*i-1)/pow(x,i);
        }
    }
    cout <<setprecision(4)<<fixed<<L<<endl; // fixed la co dinh chu so setpre
}
int main()
{
    int n;
    float x;
    cin>>n>>x;
    BieuThuc(n,x);
    return 0;
}
