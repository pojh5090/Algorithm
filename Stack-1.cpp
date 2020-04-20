#include <stdio.h>
#include <stdlib.h>
struct Stack
{
private:
	int* s;
	int idx;
public:
	void Push(int data)
	{
		this->s[this->idx++] = data;
	}
	int Pop()
	{
		return s[--idx];
	}
	Stack(int cap)
	{
		s = (int*)malloc(sizeof(int) * cap);
		idx = 0;
	}
	~Stack()
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
	
	printf("%d\n", s1.Pop());
	printf("%d\n", s1.Pop());
	printf("%d\n", s1.Pop());
	
	Stack s2(30);
	s2.Push(100);
	s2.Push(200);
	s2.Push(300);
	
	printf("%d\n", s2.Pop());
	printf("%d\n", s2.Pop());
	printf("%d\n", s2.Pop());
}
