#include<stdio.h>
int main()
{
    int n, i;
    do
    {
		printf("nhap n: ");
     	scanf("%d",&n);
     	if(n<=0 || n>=100)
            printf("Nhap sai n ! Nhap lai \n");
	}while(n<=0 || n>=100);
    int a[n];
    for(i=0;i<n;i++)
    {
		printf("a[%d]: ",i);
		scanf("%d",&a[i]);
	}

	/// tien danh duyet mang va luu lai so cac cap so tang hoac giam . Co n so thi co n-1 cap
	/// neu soCapSoTang = n-1 thi ket luan tuong ung . Neu mot trong 2 bien checkIncreasing, checkDecreasing deu > 0
	/// chung to rang mang dang khong tang khong giam -> thoat vong lap va ket thuc
	int checkIncreasing = 0;
	int checkDecreasing = 0;
	for(i=0;i<n-1;i++){
		if(a[i]<a[i+1])
            checkIncreasing++;
        else if(a[i] > a[i+1])
            checkDecreasing++;
        if(checkDecreasing*checkIncreasing>0)  /// Xuat hien ca tang ca giam thi se dung lai va ket luat in ra -1
            break;
	}

	if(checkIncreasing == n-1 && n!=1)    /// coi nhu th 1 phan tu la khong tang khong giam vi 1 so thi khong hon kem voi so nao đc
        printf("YES");
	else if(checkDecreasing == n-1 && n!=1)
        printf("NO");
	else printf("-1");

    return 0;
}
