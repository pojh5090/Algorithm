#include <iostream>
#include <ios>
using namespace std;

int main()
{
	cin.tie(NULL);         //1번 
	ios::sync_with_stdio(false);  //2번 
	
	///cin보다 빠르게 하려면 1,2번을 추가해준다면 속도가 빨라진다!! 
	
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
		cout << p[i] << "\n"; //endl보다 \n을 써주면 이것또한 속도가 빨라짐 
	}
	return 0;
}
