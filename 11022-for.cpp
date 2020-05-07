#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;;
	
	int ar[n+1];
	int br[n+1];
	int sum[n+1];
	
	for(int i = 1; i <= n; i++)
	{
		int a, b;
		cin >> a >> b;
		ar[i] = a;
		br[i] = b;
		sum[i] = a + b;		
	}		
	for(int i = 1; i <= n; i++)
		cout << "Case #" << i << ": " << ar[i] << " + " << br[i] << " = " << sum[i] << "\n";	
}
