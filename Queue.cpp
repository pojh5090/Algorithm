#include <stdio.h>
#include <stdlib.h>
struct Queue
{
    int buf[10];
    int front;
    int rear;
};
void Push(Queue* q , int data)
{
    q->buf[q->rear] = data;
    ++q->rear;
}
int Pop(Queue* q)
{
    int val = q->buf[q->front];
    ++q->front;
    return val;
}
int main()
{
    Queue q1 = { 0 };
    Push(&q1, 10);
    Push(&q1, 20);
    Push(&q1, 30);

    printf("%d\n", Pop(&q1));
    printf("%d\n", Pop(&q1));
    printf("%d\n", Pop(&q1));

    Queue q2 = { 0 };
    Push(&q2, 11);
    Push(&q2, 14);
    Push(&q2, 18);

    printf("%d\n", Pop(&q2));
    printf("%d\n", Pop(&q2));
    printf("%d\n", Pop(&q2));
}
