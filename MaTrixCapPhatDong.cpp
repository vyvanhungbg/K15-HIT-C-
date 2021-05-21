#include <bits/stdc++.h>
using namespace std;
void Matrix(int **a, int m ,int n)
{

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }

    }

}
void Show(int **a, int m, int n)
{
    cout <<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            cout << a[i][j] << " ";
        cout <<endl;
    }
}

void XoaCotK(int **&a, int m, int &n ,int k)
{
    for(int i=0;i<m;i++)
    {
        for(int j=k;j<m;j++)
        {
            a[i][j] = a[i][j+1];
        }
        a[i] = (int *) realloc(a[i],(n-1)*sizeof(int));
    }
    n--;

}
void XoaDongK(int **&a , int &m , int n, int k)
{
   for(int i=k;i<m-1;i++)
    {
        for(int j=0;j<n;j++)
            a[i][j] = a[i+1][j];
    }
    m--;
    delete [] a[m];
    a = (int **) realloc(a,m*sizeof(int*));


}
int main()
{
    int **a ,  m=4 ,  n= 4;
    a = new int *[m];
    for(int i=0;i<m;i++)
        a[i] = new int[n];
    Matrix(a,m,n);
    Show(a,m,n);
    XoaDongK(a,m,n,2);
    Show(a,m,n);

    for(int i=0;i<m;i++)
        delete [] a[i];
    delete [] a;
    return 0;

}
