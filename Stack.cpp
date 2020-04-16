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
        if (idx < capacity)
            this->s[this->idx++] = data;
        else
            printf("stack full\n");
    }
    int Pop()
    {
        return s[--idx];
    }
    Stack(int cap) //void Init 초기화 함수(생성자)
    {
        capacity = cap;
        s = (int*)malloc(sizeof(int) * cap);
        idx = 0;
    }
    ~Stack() //void Uninit 마무리 함수(소멸자)
    {
        free(s);
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
    s1.Push(30);
    s1.Push(30);
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
