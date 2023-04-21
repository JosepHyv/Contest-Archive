#include<stdio.h>

int n;
char b;

int main()
{
	scanf("%d %c",&n,&b);
	for(int c = 1; c<n; c++)
	{
		for(int d = 0; d<c; d++)
			printf("%c",b);
		printf("\n");
	}
	printf( "%d" , (n * (n-1)) / 2 );
}