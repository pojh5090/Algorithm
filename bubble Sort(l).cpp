#include <stdio.h>
void PrintArray(int list[], int size)
{
	for (int i = 0; i < size; i++)
		printf("%d ", list[i]);
	printf("\n\n");
}
void Swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
	
}
void Sort(int list[], int size)
{
	for (int j = 0; j < 7; ++j)
	{
		for (int i = 1; i < size - j; ++i)
		{
			if (list[i] < list[i - 1])
			{
				Swap(list[i], list[i - 1]);
			}
		}
	}
}
int main()
{
	int list[10] = { 80, 40, 45, 30, 90, 97, 15, 60 };
	int size = 8;

	PrintArray(list, size);
	Sort(list, size);
	PrintArray(list, size);
}
