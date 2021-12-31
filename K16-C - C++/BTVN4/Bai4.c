#include<stdio.h>
int main()
{
    int n;
    do
    {
        printf("nhap n: ");
        scanf("%d",&n);
    }
    while(n<=0 || n>=100);
    float a[n];
    for(int i=0; i<n; i++)
    {
        printf("a[%d]: ",i);
        scanf("%f",&a[i]);
    }
    float maxOfArr=a[0];   /// Nhap mang xong roi moi dc phep gan max = a[0] , Nho bien max phai cung kieu voi kiem mang
    for(int i=0; i<n; i++)
    {
        if(a[i]>maxOfArr) maxOfArr=a[i];
    }
    for(int i=0; i<n; i++)
    {
        if(a[i]==maxOfArr)
        {
            printf("%-5d",i+1);   /// In ra vi tri thi phai +1
        }
    }
    return 0;
}
