#include<stdio.h>
long int Tobin(char s[])
{
	int i;
	long int n=0;
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]=='0')
		{
			n=n*2+0;
		}
		else
			n=n*2+1;
	}
	return n;
}
void ToHex(long int n)
{
	int t=0,i=0,j;
	char hd[16];
	while(n!=0)
	{
		t=n%16;
		if(t<10)
		{
			t=t+48;	
		}	
		else
		{
			t=t+55;
		}
		hd[i++]=t;
		n=n/16;
	}
for(j=i;j>=0;j--)
{
	printf("%c",hd[j]);
}
}

int main()
{
	long int d1,d2,d3;
	int i,n=0;
	char s[100],s1[100];
	printf("\n Enter Number Two Binary Number : ");
	scanf("%s%s",s,s1);
		
	d1=Tobin(s);
	d2=Tobin(s1);
	d3=d1+d2;
	ToHex(d3);
	return 0;
}
