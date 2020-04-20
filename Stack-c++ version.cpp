#include <stdio.h>  //c++ 버전으로 만들어보자 
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
	Stack(int cap)         //생성자 
	{
		capacity = cap;
		buf = new int[cap];  
		idx = 0;
	}	 
	~Stack()               //소멸 
	{
		delete[] buf;	
	}
};
int main()
{
	Stack s1(10);  // s1을 생성 -> s1.Stack(10)
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
