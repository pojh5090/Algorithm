#include <iostream>
using namespace std;

int main()
{
	int a;
	cin >> a;;
	
	int arr[a+1];
	
	for(int i = 1; i <= a; i++)
	{
		int a, b;
		cin >> a >> b;
		arr[i] = a + b;		
	}		
	for(int i = 1; i <= a; i++)
		cout << "Case #" << i << ": " << arr[i] << "\n";	
}
