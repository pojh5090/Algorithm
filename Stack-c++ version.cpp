#include <stdio.h>  //c++ �������� ������ 
#include <Stdlib.h>
struct Stack
{
private:
	int * buf;
	int idx;
	int capacity;
public:
	void Push(int data)
	{
		if (idx < capacity)
			buf[idx++] = data;
		else
			printf("stack full!\n");
	}
	int Pop()
	{
		return buf[--idx];
	}
	Stack(int cap)         //������ 
	{
		capacity = cap;
		buf = new int[cap];  
		idx = 0;
	}	 
	~Stack()               //�Ҹ� 
	{
		delete[] buf;	
	}
};
int main()
{
	Stack s1(10);  // s1�� ���� -> s1.Stack(10)
	s1.Push(10);
	s1.Push(20);
	s1.Push(30);
	s1.Push(30);
	s1.Push(30);
	s1.Push(30);
	s1.Push(30);
	s1.Push(30);
	s1.Push(30);
	s1.Push(40);
	s1.Push(50);
	printf("%d \n", s1.Pop());
	printf("%d \n", s1.Pop());
	printf("%d \n", s1.Pop());

	Stack s2(1000);
	s2.Push(100);
	s2.Push(200);
	s2.Push(300);
	printf("%d\n", s2.Pop());
	printf("%d\n", s2.Pop());
	printf("%d\n", s2.Pop());
}
