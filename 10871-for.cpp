#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	int arr[N];
	
	int X;
	cin >> X;
	
	for(int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}	
	for(int i = 0; i < N; i++)
	{
		if(arr[i] < X)
			cout << arr[i] << " ";
	}
}
