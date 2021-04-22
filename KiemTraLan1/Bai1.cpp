#include <iostream>
#include <math.h>
using namespace std;
double Bai1(int n , double x)
{
    double L=0;
    if(n %2 != 0)
    {
        for(int i=1 ; i<=n;i++)
            L+= (2*i - 1) / (pow(x,i));
        L+=2021;
    }
    else
        L = fabs(log2(x) + exp(n) + 2021);
    return L;
}
int main()
{
    int n;
    double x;
    cin>>n>>x;
    cout << "L = "<<Bai1(n,x)<<endl;
    return 0;
}
