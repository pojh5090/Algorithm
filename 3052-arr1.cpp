#include <iostream>
using namespace std;
int main()
{
	int arr, sum = 0; 
	int sub[42] = {0};
	for(int i = 0; i < 10; i++)
	{
		cin >> arr;
		if(!sub[arr%42]++)  //ÇÙ½É !!!!!!!
			sum++;
	}
	cout << sum;
}
