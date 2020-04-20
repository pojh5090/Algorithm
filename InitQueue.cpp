#include <stdio.h>
#include <stdlib.h>
struct Queue
{
    int* buf;
    int front;
    int rear;
};
void Push(Queue* q, int data)
{
    if ((q->rear + 1)%5 == q->front)
        return; //이런 상태면 넣지 마라

    q->rear = (q->rear + 1) % 5;
    q->buf[q->rear] = data;
}
int Pop(Queue* q)
{
    if (q->front == q->rear)
        return 0x1111111;  //이건 꽉 차있는 상태

    q->front = (q->front + 1) % 5;
    return q->buf[q->front];
}
void InitQueue(Queue* q, int cap)
{
    q->buf = (int*)malloc(sizeof(int) * cap);
    q->front = q->rear = 3;  //어디서 출발하던 상관 없다
    //메모리 갯수 보다 작기만 하면 됨
}
void UninitQueue(Queue* q)
{
    free(q->buf);
    q->front = 0;
    q->rear = 0;
}
int main()
{
    Queue q1;
    InitQueue(&q1, 5);
    Push(&q1, 10);
    Push(&q1, 20);
    Push(&q1, 30);
    printf("%d\n", Pop(&q1));
    printf("%d\n", Pop(&q1));
    printf("%d\n", Pop(&q1));
    UninitQueue(&q1);

    Queue q2;

    InitQueue(&q2, 100);
    Push(&q2, 11);
    Push(&q2, 14);
    Push(&q2, 18);
    printf("%d\n", Pop(&q2));
    printf("%d\n", Pop(&q2));
    printf("%d\n", Pop(&q2));
    UninitQueue(&q2);
}
