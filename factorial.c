#include <stdio.h>

int main()
{
	int i,n,f=1;
	printf("\nEnter the number : ");
	scanf("%d",&n);
	if(n==0 || n==1)  
		printf("1\n");
	else 
	{
		for(i=1;i<=n;i++)
		{
			f*=i;
		}
	}
	printf("factorial of %d = %d\n",n,f);
	main();
	return 0;
}
