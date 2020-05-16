#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;

	int arr[] = {0};
	int sum = 0;   //ÃÑÁ¡ 
	float py; //Æò±Õ
	int cnt = 0; //Æò±Õ ³Ñ´Â¾Öµé 

	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		for (int j = 0; j < num; j++)
		{
			cin >> arr[j];

			sum += arr[j];
		}
		for (int k = 0; k < num; k++)
		{
			py = (float)sum / (float)num;

			if (arr[k] > py)
			{
				cnt++;
			}
		}
		cout << fixed;
		cout.precision(3);

		cout << (float)cnt / num * 100 << '%';

		return 0;
	}
}
