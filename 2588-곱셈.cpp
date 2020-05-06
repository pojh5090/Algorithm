#include <iostream>
using namespace std;

int main(void)
{
	int A, B;
	
	cin >> A >> B;
	
	int one = B % 10;
	int two = ((B % 100) - one)/10;
	int three = B / 100;
	
	cout << A * one << endl;
	cout << A * two << endl;
	cout << A * three << endl;
	cout << A * B << endl;
}
