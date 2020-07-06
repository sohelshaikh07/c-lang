/*Automorphic Number its square end with number*/
#include<stdio.h>
main()
{
	long int n,sq;
	int r,d=10,t;
	printf("\n Enter Number : ");
	scanf("%d",&n);
	sq=(n*n);
	t=n;
	int eq=0;
	while(t)
	{
		r=sq%d;
		if(r==n)
		{
			eq=1;
			break;
		}
		d*=10;                         
		t/=10;
	}
(eq==1)?printf("\n it is Automated Number"):printf("\n it's not Automated Number");
}
