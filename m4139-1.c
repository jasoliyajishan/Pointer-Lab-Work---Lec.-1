#include<stdio.h>

main()
{
	int a[100];
	int *p[100];
	int c,d;

	
	int i,n;
	printf("enter arry size : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("a[%d]",i);
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<n;i++)
	{
		p[i] =&a[i];
		c=*p[i];
		printf("%d=%d\n",a[i],c*c);
	
	}
}
