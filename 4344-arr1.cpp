#include <iostream>
#include <stdio.h>
using namespace std;

int main() 
{
	int c, n;
	float avg, percentage;
	int up;
	
	cin >> c;  //케이스 수 입력하기 
	
	for(int i = 0; i < c; i++)
	{
		avg = 0;
		up = 0;
		percentage = 0;
		
		cin >> n;  
		float score[n];
		
		for(int j = 0; j < n; j++)
		{
			cin >> score[j];
			avg += score[j]; 
		}	
		avg = avg/(float)n;
		
		for(int j = 0; j < n; j++)
		{
			if(avg < score[j])
				up++;
		}		
		percentage = (float)(((float)up)/((float)n))*(float)100;
		printf("%.3f%%\n", percentage);
	}	
	return 0;
}
