#include<stdio.h>
int main(void)
{
	int a;
	scanf("%d",&a);
	a |= (1<<3);
	printf("%d\n",a);

	a &= ~(1<<3);
	printf("%d\n",a);
}
