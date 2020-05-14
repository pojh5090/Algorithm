#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	
	cin >> a >> b >> c;
	
	int M = a*b*c;
	
	int arr[10] = {0};
	
	while(M > 0)
	{
		arr[M % 10]++;
		
		M /= 10;
	}
	
	for(int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
	return 0;
}
