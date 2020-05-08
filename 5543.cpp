#include <iostream>
using namespace std;
int main()
{
	int bur[3];
	int dri[2];
	int c_bur = 2000;
	int c_dri = 2000;
	
	for(int i = 0; i < 3; i++)
	{
		cin >> bur[i];
		if(bur[i] < c_bur)
			c_bur = bur[i];
	}
	
	for(int i = 0; i < 2; i++)
	{
		cin >> dri[i];
		if(dri[i] < c_dri)
			c_dri = dri[i];
	}
	cout << c_bur + c_dri - 50;
}
