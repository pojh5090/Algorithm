#include <iostream>
#include <ios>
using namespace std;

int main()
{
	cin.tie(NULL);         //1�� 
	ios::sync_with_stdio(false);  //2�� 
	
	///cin���� ������ �Ϸ��� 1,2���� �߰����شٸ� �ӵ��� ��������!! 
	
	int testNum = 0;
	
	cin >> testNum;
	
	int *p = new int[testNum];
	int a, b;
	
	for(int i = 0; i < testNum; i++)
	{
		cin >> a >> b;
		p[i] = a + b;
	}
	for(int i = 0; i < testNum; i++)
	{
		cout << p[i] << "\n"; //endl���� \n�� ���ָ� �̰Ͷ��� �ӵ��� ������ 
	}
	return 0;
}
