#include<iostream>
using namespace std;
void For_each(int* b, int* e, void(*f)(int))
{
	for(; b != e; ++b)
		f(*b);
}
////////////////////////////////////////////
void Print(int data)
{
	cout << data << endl;
}
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7 ,8 ,9, 10 };
	
	For_each(arr, arr + 10, Print);
}
