#include <stdio.h>
#include <stdlib.h>

struct Stack
{
private:
	int* s;
	int idx;
	int capacity;
public:
	void Push(int data)
	{
		if(idx < capacity) 
			this->s[this->idx++] = data;
		else
			printf("stack full\n");
	}
	int Pop()
	{
		return s[--idx];
	}
	Stack(int cap) //持失切 
	{
		capacity = cap;
		s = (int*)malloc(sizeof(int) * cap);
		idx = 0;
	}
	~Stack() //社瑚切 
	{
		free(s);
	 } 
};
int main()
{
	Stack s1(10);
	s1.Push(10);
	s1.Push(20);
	s1.Push(30);
	s1.Push(40);
	s1.Push(50);
	
	printf("%d\n", s1.Pop());
	printf("%d\n", s1.Pop());
	printf("%d\n", s1.Pop());
	printf("%d\n", s1.Pop());
	printf("%d\n", s1.Pop());
	
	Stack s2(100);
	s2.Push(200); 
	s2.Push(300); 
	s2.Push(400);
	
	printf("%d\n", s2.Pop());
	printf("%d\n", s2.Pop());
	printf("%d\n", s2.Pop());
}
