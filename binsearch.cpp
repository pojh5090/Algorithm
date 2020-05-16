#include <stdio.h>
int binsearch(int list[], int size, int key)
{
	int left = 0;
	int right = size-1;
	
	while(left <= right)
	{
		int middle = (left + right) / 2;
		
		if(list[middle] > key)
		{
			left = left;
			right = middle -1;
		}
		else if(list[middle] < key)
		{
			left = middle + 1;
			right = right;
		}
		else
			return middle;
	}
	return -1;
}
int main()
{
	int list[10] = { 23, 45, 50, 60, 65, 67, 80, 90};
	int size = 8;
	
	int idx = binsearch(list, size, 60);
	if(idx != -1)
		printf("[%d] : %d\n", idx, list[idx]);
}
