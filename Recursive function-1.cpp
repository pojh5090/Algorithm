#include <stdio.h>
void Print(int n)
{
	printf("data : %d\n", n);
	if(n > 0)
		Print(n -1);
}
int main()
{
	Print(2);
}
