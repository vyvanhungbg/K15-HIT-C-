#include<stdio.h>
int main()
{
	int n;
	do
    {
		printf("nhap n: ");
     	scanf("%d",&n);
	}while(n<=0 || n>=100);
	float a[n];
	for(int i=0;i<n;i++)
    {
		printf("a[%d]: ",i);
		scanf("%f",&a[i]);
	}
	for(int i=0;i<n;i++)  //C1 Lam cach nay thi thuat toan chay nhanh hon
	{
	    if(a[i]<0)
	    {
	    	for(int j=i+1;j<n;j++)
	    	{
	    		if(a[j]<0 && a[j]>a[i])
	    		{
	    			int t=a[i];
	    			a[i]=a[j];
	    			a[j]=t;
				}
			}
        }
	}

//	for(int i=0;i<n;i++)  //C2 lam cach nay ngan hon nhung k toi uu thuat toan
//	{
//	    for(int j=i+1;j<n;j++)
//        {
//            if(a[i] < 0 && a[j]<0 && a[j]>a[i])
//            {
//                int t=a[i];
//                a[i]=a[j];
//                a[j]=t;
//            }
//        }
//	}

	for(int i=0;i<n;i++){
		printf("%-5.2f ",a[i]);
	}
    return 0;
}
