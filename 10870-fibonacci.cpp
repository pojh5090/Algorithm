#include<iostream>
using namespace std;
int Fibonacci(int a)
{
	if(a == 0)
		return 0;
	else if (a == 1)
		return 1;
	else
		return Fibonacci(a-1) + Fibonacci(a-2);
}
int main()
{
	int n;
	cin >> n;
	
	printf("%d", Fibonacci(n));
}
