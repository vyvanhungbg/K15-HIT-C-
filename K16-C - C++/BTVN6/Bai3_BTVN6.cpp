#include <iostream>
using namespace std;

void NhapMang(int a[],int n)
{
    for (int i=0; i<n; i++)
    {
        cin >> a[i];
    }
}
void XuatMang(int a[], int n)
{
    cout<<endl;
    for (int i=0; i<n; i++)
        cout << a[i] << " ";
}

void SapXep(int a[],int left,int right , bool  isIncreasing)/// sap xep tu left to right ,
{
    for (int i=left; i<right; i++)
    {
        for(int j=i+1; j<right; j++)
        {
            if(a[i]>a[j] ==  isIncreasing)
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}

int main()
{
    int n;
    do
    {
        cin >> n;
    }
    while (n<3||n>50);
    int a[n];
    NhapMang(a,n);
    XuatMang(a,n);
    SapXep(a,0,n,true);// sap xep ca mang tang dan
    int i=0;
    while(a[i]<0)  // tim cac phan tu am
        i++;
    SapXep(a,0,i,false); // sap xep giam dan cac phan tu am
    XuatMang(a,n);
}
