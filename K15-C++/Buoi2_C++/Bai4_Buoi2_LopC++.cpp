#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    // cach 1 2 for
    for( int i=0; i<n;i++)
    {
        for(int j=0; j<n;j++)
           if(i == 0 || i == n-1 || j == 0 || j == n-1) // khi diem A(i,j) o canh thi in * con khong in space
                cout << "* ";
           else
                cout << "  ";

        cout <<endl;
    }

    // cach 2 1 for

    for(int i=0; i<n*n;i++)
    {
        int tmp = (i/n)*n; // xac dinh gia tri i cua * dau moi dong

        if(i % n ==0) // xuong dong
            cout <<endl;

        if(i>tmp && i< tmp+n-1 && i>n && i< n*(n-1)) // (i>tmp && i< tmp+n-1) lam rong hinh vuong , (i>n && i< n*(n-1)) ko lam rong canh tren va canh duoi
            cout << "  ";
        else
            cout << "* ";
    }

    return 0;
}
