#include <iostream>
using namespace std;

int main(void)
{
	int h, m;
	
	cin >> h;
	cin >> m;
	
	if(m < 45)
	{
		m += 15;
		h--;
	}
	else
		m = m - 45;
	if(h < 0 )
		h = 24 + h;
		
	cout << h << ' ' << m;	
}
