#include <iostream>
using namespace std;
int main()
{
	int buf[9];
	int index, max = 0;
	
	for(int i = 0; i < 9; i++ )
	{
		cin >> buf[i];
		if(max < buf[i])
		{
			max = buf[i];
			index = i + 1;
		}
	}
	cout << max << endl;
	cout << index;
}
