#include <stdio.h>

int main()
{
	int  n, t; 
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d", &n);
		// if(n == 1){
		// 	puts("1\n");
		// 	return 0;
		// }
		int ans = 0;
		for(int c = 1; c * c <=n; c++)
		{
			if(n % c  == 0)
				ans += (c *c  == n? 1 : 2);
		}
		printf("%d", ans);
		printf("\n");
	}
}