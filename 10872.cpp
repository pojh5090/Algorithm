#include <iostream>
using namespace std;
int Factorial(int a)
{
	if (a <= 1)
		return 1;

	return a * Factorial(a-1);
}
int main()
{
	int n;
	cin >> n;
	printf("%d", Factorial(n));
}
