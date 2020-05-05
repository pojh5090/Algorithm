#include <iostream>
using namespace std;

int main(void)
{
	int A, B;
	
	cin >> A >> B;
	
	int one = B % 10;
	int two = (B % 100) - one;
	int three = B / 100;
	
	cout << one <<',' << two << ',' << three << endl; 
}
