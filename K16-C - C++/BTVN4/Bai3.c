#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    do
    {
        printf("nhap n: ");
        scanf("%d",&n);
    }
    while(n<=0 || n>=100);
    int a[n];
    for(int i=0; i<n; i++)
    {
        printf("a[%d]: ",i);
        scanf("%d",&a[i]);
    }
    int soCacSoCP=0;
    int arrSoCP[n];
    for(i=0; i<n; i++)
    {
        if(a[i] >=0 && (int)sqrt(a[i]) == sqrt(a[i]))  // Coi 0 la scp
            arrSoCP[soCacSoCP++] = a[i];
    }

    /// XUAT
    printf("\nSo luong SCP: %d \nDay so SCP la : ",soCacSoCP);  // thuong thi chinh xac nhat . Neu khong co scp nao thi in khong co so cp nao
    for(i=0; i<soCacSoCP; i++)
        printf("%-5d",arrSoCP[i]);



    /// PHAN B
    int soCacSoHH=0,j;
    int arrSoHH[n];

    for(i=0; i<n; i++)
    {
        int tong = 0;
        for(j=1; j<a[i] ; j++) // Coi 0 la shh
        {
            if(a[i] % j ==0)
                tong+=j;
        }
        if(tong==a[i])
            arrSoHH[soCacSoHH++] = a[i];
    }

    /// XUAT
    printf("\nSo luong SHH: %d \nDay so HH la : ",soCacSoHH);  // thuong thi chinh xac nhat . Neu khong co hhnao thi in khong co so hh nao
    for(i=0; i<soCacSoHH; i++)
        printf("%-5d",arrSoHH[i]);
    return 0;
}
