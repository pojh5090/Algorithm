#include <iostream>
using namespace std;
//n�� �Է¹޾Ƽ�
//1~n���� �� �� ¦���� ���ؼ� ����ϴ� 
int main(void) 
{
	int n, sum = 0;�� 
	
	do {
		cout << "���� �Է����ּ���. :";
		cin >> n;
	} while(n <= 0);
	
	for(int i = 1; i <= n; i++)
	{
		if ( i % 2 == 0)
			sum += i;
	}
	cout << "������ ����: " << sum << "�Դϴ�";
	 
}
