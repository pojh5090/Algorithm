#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	
	cin >> a >> b >> c;
	
	if(a<1 || b < 1 || c<1 || a>100 || b>100 || c>100)
		return -1;
		
	if(a >= b && a >= c)
	{
		if(b >= c)
			cout << b << endl;
		else
			cout << c << endl;
	}
	else if(b >= a && b >= c)
	{
		if(a >= c)
			cout << a << endl;
		else
			cout << c << endl;
	}
	else
	{
		if(a >= b)
			cout << a << endl;
		else
			cout << b << endl;
	}
	
	return 0;
}
