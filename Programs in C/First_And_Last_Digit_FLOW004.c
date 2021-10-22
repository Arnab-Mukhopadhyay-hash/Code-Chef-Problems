#include <stdio.h>

int main() 
{
	int t,n,r,s;
	scanf("%d\n",&t);
	for(int i=0;i<t;i++)
	{
	    scanf("%d",&n);
	    r=n%10;
	    while(n>9)
	    {
	        n=n/10;
	    }
	    s=n+r;
	    printf("%d\n",s);
	}
	return 0;
}