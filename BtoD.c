/*Binary to Decimal*/
#include<stdio.h>
main()
{
	int i,n=0;
	char s[100];
	printf("\n Enter Number : ");
	scanf("%s",s);
	for(i=0;s[i];i++)
	{
		if(s[i]=='0')
		{
			n=n*2+0;
		}
		else
			n=n*2+1;
	}
	
}
