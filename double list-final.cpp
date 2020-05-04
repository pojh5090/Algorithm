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
	Node* n = (Node*)malloc(sizeof(Node));
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
void AddTailList(List* plt, int data)
{
	Node* n = AllocNode(data);
	Node* tail = plt->tail;
	Node* ptail = tail->prev;
	
	ptail->next = n;
	n->prev = ptail;
	tail->prev = n;
	n->next = tail;
}
void AddHeadList(List* plt, int data)
{
	Node* n = AllocNode(data);
	Node* head = plt->head;
	Node* phead = head->next;
	
	phead->prev = n;
	n->next = phead;
	
	head->next = n;
	n->prev = head;
	
}
void PrintList(List* plt)
{
	for(Node* p = plt->head; p != NULL; p = p->next)
		printf("%5d", p->data);
	printf("\n");
}
Node* SearchList(List *plt, int data)
{
	Node * p = plt->head->next;
	
	while(p != plt->tail)
	{
		if(p->data == data)
			return p;
		p = p->next;
	}
	return NULL;
}
void RemoveList(List* plt, int data)
{
	Node* p = SearchList(plt, data);
	if(p)
	{
		Node* pp = p->prev;
		Node* np = p->next;
		
		pp->next = np;
		np->prev = pp;
		
		free(p);
	}
}
void UninitList(List* plt)
{
	for(Node* p = plt->head; p != NULL;)
	{
		Node* np = p->next;
		free(p);
		p = np;
	}
}
int main()
{
	List lt;
	InitList(&lt);
	
	AddTailList(&lt, 10);
	AddTailList(&lt, 20);
	AddTailList(&lt, 30);
	
	AddHeadList(&lt, 100);
	AddHeadList(&lt, 200);
	AddHeadList(&lt, 300);
	
	
	Node* p = SearchList(&lt, 30);
	if(p)
		printf("search: %d\n", p->data);
		
	PrintList(&lt);
	RemoveList(&lt, 20);
	PrintList(&lt);
	
	UninitList(&lt);
}
