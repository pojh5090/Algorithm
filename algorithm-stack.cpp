#include<iostream>
using namespace std;

template <typename T>
class Stack
{
	int top;
	T buf[10000];
public:
	Stack() : top(0) {}
	void Push (T data) { buf[top++] = data; }
	T Pop() { return buf[--top]; }
};
class Point
{
	int x, y;
public:
	explict Point(int _x = 0, int _y = 0) : x(_x) , y(_y) { }
	void Print()const { cout << x << ',' << y;}
};
int main()
{
	Stack<Point> s1;
	
	s1.Push(Point(2, 3));
	s1.Push(Point(4, 5));
	
	Point pt2(5, 6);
	s1.Push(pt2);
	
	s1.Pop().Print(); cout << endl;
	s1.Pop().Print(); cout << endl;
	s1.Pop().Print(); cout << endl;
}
