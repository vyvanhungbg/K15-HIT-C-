#include<iostream>
using namespace std;
int main()
{
    int n,m;
    double x, y;
    cin>>n>>m;
    cin>>x>>y;
    if(n > m)
        cout << "Co "<<n<< " con cho"<<endl;
    else
        cout << "Co "<<m<< " con meo"<<endl;

    if(x > y)
        cout << "Gau gau "<<x<< " lan"<<endl;
    else
        cout << "Meo meo "<<y<< " lan"<<endl;

    return 0;
}
