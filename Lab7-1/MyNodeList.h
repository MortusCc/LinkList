#pragma once
#include <stdio.h>
#include <stdlib.h>
typedef int DATA;
typedef struct node
{
	DATA data;
	struct node* next;
}NODE;
#define MAX 100
NODE* HeadInsertBuild(NODE* head);
NODE* FindLast(NODE* head);
NODE* FindIndexNode(NODE* head, int index);
NODE* InsertLast(NODE* head);
NODE* InsertIndexNode(NODE* head, int index);
NODE* Delete(NODE* head, int index);
void PrintLinkList(NODE* head);