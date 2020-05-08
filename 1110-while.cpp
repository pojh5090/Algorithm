#include <iostream>
using namespace std;

int main()
{
	int a;	
	int one;
	int two;
	int sum;
	int count = 0;
	int result = 0;
	
	cin >> a;
	
	if(a < 10)
	{
		a *= 10;
	}
	
	result = a;
	
	while(1)
	{
		one = result / 10;
		two = result % 10;
		sum = one + two;		
		result = (two * 10) + (sum % 10);
		count++;
		
		if(a == result) break;
	}
	cout << count;	
}
