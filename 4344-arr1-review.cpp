#include <iostream>
using namespace std;

int main()
{
	int n; //���̽� �� 
	int sum;
	int count;   //�л� ��  
	
	double average;
	double ratioStu;  //�л� ���� 
	
	while(1)
	{
		sum = 0;
		count = 0;
		
		cin >> n;
		if(n == 0)	
			break;
		int *score = new int[n];
		if(!score) //-->�޸� �Ҵ� ���� �� 
		{
			return 0; 
		}
		for(int i = 0; i < n; i++)
		{
			cin >> score[i];
			sum += score[i];
		}
		average = (double)sum / n;
		
		for(int i = 0; i < n; i++)
		{
			if(average < score[i])
				count++;
		}
		ratioStu = ((double)count / n)* 100;
		
		cout.precision(3);
		cout << fixed << ratioStu << "%" << endl;
	} 
	
	return 0;
}
