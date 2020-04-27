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
Node* AllocList(int data)
{
	Node* n = (Node*)malloc(sizeof(Node));
	n->data = data;
	n->link = NULL;
	
	return n;
}
void PrintList(List *plt)
{
	for(Node * p = plt->head->link; p != NULL; p = p->link)
		printf("%d ", p->data);
	printf("\n");
}
void AddList(List *plt, int data)
{
	Node * n = AllocList(data);
	plt->tail->link = n;
	plt->tail = plt->tail->link;
}
int SearchList(List *plt, int data)
{
	Node* p = plt->head->link; //이건 더미노드 다음의 실제노드!
	while(p != NULL && p->data != data)
		p = p->link; //계속 다음으로 이동~	
	
	if( p!= NULL)
		return 1;
	else
		return 0; 
} 
void RemoveList(List* plt, int data)
{
	Node * pp = plt->head;
	Node * p = plt->head->link;
	
	while (p != NULL && p->data != data)
	{
		pp = p;   //->이동 직전에 p를 pp로 기억한 다음에 
		p = p->link;  //->이동한다 
	}
	if(p != NULL)
	{
		pp->link = p->link;
		free(p);  //->원소를 찾았따면 삭제~ 
	}
}
void InitList(List* plt)
{
	plt->head = AllocList(0);
	plt->tail = plt->head;
}
void UninitList(List * plt)
{
	for(Node * p = plt->head; p != NULL;)
	{
		Node * np = p->link;
		free(p);
		p = np;
	}
}
int main()
{
	List lt;
	
	InitList(&lt);
	AddList(&lt, 10);
	AddList(&lt, 20);
	AddList(&lt, 30);
	AddList(&lt, 40);
	AddList(&lt, 50);
	
	if(SearchList(&lt, 20))
		printf("존재!\n");
	else
		printf("없다");
		
	RemoveList(&lt, 40);
	
	PrintList(&lt);
	UninitList(&lt);
}
