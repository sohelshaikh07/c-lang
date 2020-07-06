#include<stdio.h>
main()
{
	float m1,m2,m3,avg;
	char name[40];
	printf("enter the name:");
	scanf("\n %s",&name);
	//printf("enter the mark:");
	//scanf("%f",m1);
	printf("enter the 1st score:");
	scanf("%f",&m1);
	
    printf("enter the 2nd score:");
	scanf("%f",&m2);
	printf("enter the 3rd score:");
	scanf("%f",&m3);
	avg=(m1+m2+m3)/3;
	printf("name: %s\n",name);
	printf("1st score: %.2f\n",m1);
	printf("2nd score: %.2f\n",m2);
	printf("3rd score: %.2f\n",m3);
	printf("avg: %.2f\n",avg);
}
