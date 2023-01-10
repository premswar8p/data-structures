#include<stdio.h>
int main()
{
	int i,n,nexttrem,t1,t2;
	int nextterm=t1+t2;
	printf("enter a number :");
	scanf("%d",&n);
	printf("fibnoacci series : %d,%d",t1,t2);
	for (i = 3;i<=n;i++)
	{
		printf("%d",nextterm);
		t1=t2;
		t2=nexttrem;
		nexttrem= t1+t2;
	}
	return 0;
}
