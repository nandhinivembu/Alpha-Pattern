#include<stdio.h>
main()
{
	int i,j,k,height,number=1;
	printf("Enter the height of pyramid");
	scanf("%d",&height);
	for(i=0;i<height;i++)
	{
		for(j=height-1;j>i;j--)
		{
			printf(" ");
		}
		for(k=1;k<=number;k++)
		{
			//if(i%2==0)
			printf("%c",i+65);
		}
		number+=2;
		printf("\n");
	}
}
