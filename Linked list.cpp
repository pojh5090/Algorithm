#include <stdio.h>
#include <stdlib.h>
/////linked list
struct Node
{
    int data;
    Node* link;
};
Node* AllocNode(int data)
{
    Node* n = (Node*)malloc(sizeof(Node));
    n->data = data;
    n->link = NULL;

    return n;
}
void PrintNode(Node* head)
{
    for (Node* p = head->link; p != NULL; p = p->link)
        printf("%d\n", p->data);
    printf("\n");
}
void AddNode(Node* head, int data)
{
    Node* n = AllocNode(data); //새로운 n이라는 노드
    Node* tail = head;
    while (tail->link != NULL)  //tail의 link가 null일때 까지~
        tail = tail->link;
    tail->link = n;
}
void InitNode(Node* * phead)
{
    *phead = AllocNode(0);
}
void UninitNode(Node** phead)
{
    for (Node* p = *phead; p != NULL;)
    {
        Node* np = p->link;
        free(p);
        p = np;
    }
}
int main()
{
    Node* head = NULL;

    InitNode(&head); 
    AddNode(head, 10);
    AddNode(head, 20);
    AddNode(head, 30);
    AddNode(head, 40);
    AddNode(head, 50);
    AddNode(head, 60);

    PrintNode(head);
    UninitNode(&head);
}
