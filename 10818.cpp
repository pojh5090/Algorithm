#include <iostream>
using namespace std;
int main()
{
	int a;
	cin >> a;
	
	int min, temp, index;
	
	int arr[a];
	
	for(int i = 0; i < a; i++)
		cin >> arr[i];
		
	for(int i = 0; i < a; i++)
	{
		min = 9999;
		for(int j = i; j < a; j++) {
			if(arr[j] < min)
			{
				min = arr[j];
				index = j;
			}
		}
		temp = arr[i];
		arr[i] = arr[index];
		arr[index] = temp;
	}
	
	cout << arr[0] << ',' << arr[a-1];
}
