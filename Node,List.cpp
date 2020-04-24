#include <stdio.h>
#include <stdlib.h>
struct Node
{
	int data;
	Node* link;	
};
struct List
{
	Node* head;
	Node* tail;
};
Node* AllocNode(int data)
{
	Node* n = (Node*)malloc(sizeof(Node));
	n->link = NULL;
	n->data = data;
	
	return n;
}
void PrintNode(List* plt)
{
	for(Node * p = plt->head->link; p != NULL; p = p->link)
		printf("%d\n", p->data);
	printf("\n");
}
void AddNode(List* plt, int data)
{
	Node * n = AllocNode(data);
	//원래 while문을 사용했었던 자리 
	plt->tail->link = n;
	plt->tail = plt->tail->link;
}
void InitNode(List * plt)
{
	plt->head = AllocNode(0);
	plt->tail = plt->head;
}
void UninitNode(List* plt)
{
	for(Node* p = plt->head; p != NULL;)
	{
		Node * np = p->link;
		free(p);
		p = np;
	}
}
int main()
{
	List lt;
	
	InitNode(&lt);
	AddNode(&lt, 10);
	AddNode(&lt, 20);
	AddNode(&lt, 30);
	
	PrintNode(&lt);
	UninitNode(&lt);
	
}
