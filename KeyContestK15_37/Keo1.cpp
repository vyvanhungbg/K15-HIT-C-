#include <bits/stdc++.h>
using namespace std;

int Keo(int x,int y)
{
    int soKeoAnDc = x;
    while (int(x/y) > 0)
    {
        soKeoAnDc += int(x / y);
        x = x % y + int(x / y);
    }
    return soKeoAnDc;
}

int main()
{
    int x,y;
    while (true)
    {

        cin>>x>>y;
        cout <<Keo(x,y*2)<<endl;
    }

    return 0;
}
