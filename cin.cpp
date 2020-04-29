#include <iostream>
using namespace std;
//n을 입력받아서
//1~n까지 수 중 짝수만 더해서 출력하는 
int main(void) 
{
	int n, sum = 0;거 
	
	do {
		cout << "값을 입력해주세요. :";
		cin >> n;
	} while(n <= 0);
	
	for(int i = 1; i <= n; i++)
	{
		if ( i % 2 == 0)
			sum += i;
	}
	cout << "값들의 합은: " << sum << "입니다";
	 
}
