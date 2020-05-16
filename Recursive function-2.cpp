#include <stdio.h>
void Print(int n)
{
	printf("+data : %d\n", n);
	if(n > 0)
		Print(n -1);
		printf("**\n");
	printf("-data : %d\n", n);
}
int main()
{
	Print(2);
}
