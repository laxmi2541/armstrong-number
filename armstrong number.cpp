#include<stdio.h>
int main()
{
	int a,n,sum=0;
	printf("Enter a number");
	scanf("%d",a);
	n=a;
	while(n!=0)
	{
		sum=sum+(n%10*n%10*n%10);
		n=n/10;
	}
	if(a==sum)
	{
		printf("%d is an armstrong",a);
	}
	else
	{
		printf("%d is not an armstrong number",a);
	}
	return 0;
	}
	
