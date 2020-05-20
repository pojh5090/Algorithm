#include <iostream>
using namespace std;

int main()
{
	int n; //케이스 수 
	int sum;
	int count;   //학생 수  
	
	double average;
	double ratioStu;  //학생 비율 
	
	while(1)
	{
		sum = 0;
		count = 0;
		
		cin >> n;
		if(n == 0)	
			break;
		int *score = new int[n];
		if(!score) //-->메모리 할당 실패 시 
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
