#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < i; j++)
		{
			printf(" ");
		}
		for(int k = 0; k < 2 * (n - i) - 1; k++)   //¿©±â ÇÙ½É~!! 
		{
			printf("*");				
		}
		printf("\n");
	}
	for(int i = 0; i < n-1; i++ )
	{
		for(int j = 0; j < n )
	}
	
}
