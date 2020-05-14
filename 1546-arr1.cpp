#include<iostream>
using namespace std;
int main()
{
	int n;
	int Max = 0;
	float arr[1000];
	float sum;
	cin >> n;
	
	for(int i = 0; i < n; i++)
	{
		cin >> arr[i];
		if(Max < arr[i])
			Max = arr[i];
	}

	for(int i = 0; i < n; i++)
	{
		arr[i] = arr[i] / Max * 100;
		sum += arr[i];
	}
	
	cout << fixed;
	cout.precision(2);
	cout << sum / n << endl;
} 
