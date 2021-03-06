#include <stdio.h>
#include <stdlib.h>
struct Node
{
	int data;
	Node* prev;
	Node* next;	
};
struct List
{
	Node* head;
	Node* tail;
};
Node* AllocNode(int data)
{
	Node * n = (Node*)malloc(sizeof(Node));
	n->data = data;
	n->prev = n->next = NULL;
	
	return n;
}
void InitList(List* plt)
{
	Node* h = AllocNode(0);
	Node* t = AllocNode(0);
	plt->head = h;
	plt->tail = t;
	
	h->next = t;
	t->prev = h;
}
void AddList(List * plt, int data)
{
	Node* n = AllocNode(data);
	n->data = data;
	
	plt->head->next = n;
	n->prev = plt->head;
	
	plt->tail->prev = n;
	n->next = plt->tail;
}
void PrintList(List * plt)
{
	for(Node* p = plt->head; p != NULL; p = p->next)
		printf("%5d", p->data);
	printf("\n");
}
void UninitList(List * plt)
{
	for(Node * p = plt->head; p != NULL;)
	{
		Node * np = p->next;
		free(p);
		p = np;
	}
}
int main()
{
	List lt;
	InitList(&lt);
	AddList(&lt, 10);
	
	PrintList(&lt);
	
	UninitList(&lt);
}
