#include <stdio.h>      
void Print(int n)
{
	printf("+data : %d\n", n);
	if (n > 0)
	{
		for (int i = 0; i < n; ++i)
			Print(n - 1);
	}
	printf("-data : %d\n", n);
}
int main()
{
	Print(2);
}
