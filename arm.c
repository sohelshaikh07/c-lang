/*armstrong Number the Range You Enter */
#include<stdio.h>
int main()
{
	int a,r,t,i,sum=0,q,ii;
	printf("\n Enter Range You Want : ");
	scanf("%d",&r);
	
	printf("\n The Armstrong Numbers");
	
	for(i=1;i<=r;i++)
	{
		sum=0;
		t=i;
		ii=i;
		while(ii>0)
			{ 
			  q=ii%10;
			  sum=sum+(q*q*q);
			  ii=ii/10;
			}
			if(sum==t)
			{
				printf("\n%d",t);
			}				
	}
	
return 0;
}
