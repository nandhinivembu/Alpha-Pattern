#include<stdio.h>
main()
{
	int num,a,i,j,low,low1;
	char alp='A';
	char c;
	printf("Enter The Number");
	scanf("%d",&num);
	low=num-1;
	low1=num-1;
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=i;j++)
		{
		printf("%c",alp++);
		}
		printf("\n");
	}
	a:
		for(j=1;j<=low1;j++)
		{	
			printf("%c",alp++);
		}
	i=1;
	while(i<=low)
	{
		switch(alp)
		{
			case 'c':
				alp=a;
				goto a;
		}
	}
}
