#include<stdio.h>
int main()
{
    int n,i,j;
    do
    {
        printf("nhap n: ");
        scanf("%d",&n);
    }
    while(n<=0 || n>=100);
    int a[n];
    for(int i=0; i<n; i++)
    {
        do
        {
            printf("a[%d]: ",i);
            scanf("%d",&a[i]);
        }
        while(a[i]<=0);     /// mang yeu cau nhap la so nguyen duong
    }
    int tongCacSNT=0;
    printf("Day cac SNT : ");
    for(int i=0; i<n; i++) // duyet mang
    {
        int isSNT = 1;  /// Gia dinh ban dau la SNT;
        for(j= 2; j*j<=a[i]; j++)
        {
            if(a[i] % j ==0)
            {
                isSNT = 0;/// Neu xuat hieen 1 so j (j khac 0 va chinh no ) ma a[i] chia het -> ko phai snt -> thoat luon vong lap
                break;
            }
        }
        if(isSNT==1 && a[i] !=1)  /// de bai yeu cau in roi tinh tong -> tich hop in va tinh tong de giam bot vong for
        {
            tongCacSNT+=a[i];
            printf("%-5d",a[i]);
        }
    }
    printf("\nTong = %d ",tongCacSNT);
    return 0;
}
