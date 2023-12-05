#define _CRT_SECURE_NO_WARNINGS 1
#include "MyNodeList.h"
NODE* HeadInsertBuild(NODE* head)
{
	head = (NODE*)malloc(sizeof(NODE));
	NODE* node = NULL;
	head->next = NULL;
	int p = 0,temp = 0;
	for (int i = 0; i < MAX; i++)
	{
		p = scanf("%d", &temp);
		if (p == EOF)
		{
			goto END;
		}
		node = (NODE*)malloc(sizeof(NODE));
		node->data = temp;
		node->next = head->next;
		head->next = node;
	}
	head = node;
END:
	return head;
}
NODE* FindLast(NODE* head)
{
	NODE* pt = NULL;
	pt = head;
	while (pt->next != NULL)
	{
		pt = pt->next;
	}
	return pt;
}
NODE* FindIndexNode(NODE* head, int index)
{
	NODE* pt = NULL;
	pt = head;
	int i = 1;
	while (i < index && pt != NULL)
	{
		pt = pt->next;
		i++;
	}
	return pt;
}
NODE* InsertLast(NODE* head)
{
	NODE* prePt = NULL, * pt = NULL;
	pt = (NODE*)malloc(sizeof(NODE));
	scanf("%d", &pt->data);
	prePt = FindLast(head);
	prePt->next = pt;
	pt->next = NULL;
	return head;
}
NODE* InsertIndexNode(NODE* head,int index)
{
	NODE* prePt = NULL, * pt = NULL;
	pt = (NODE*)malloc(sizeof(NODE));
	scanf("%d", &pt->data);
	prePt = FindIndexNode(head, index);
	if (prePt != NULL)
	{
		prePt->next = pt;
		pt->next = prePt->next;
	}
	else
	{
		printf("There is no such a node!\n");
	}
	return head;
}
NODE* Delete(NODE* head, int index)
{
	NODE* prePt = NULL, * pt = NULL;
	prePt = FindIndexNode(head, index - 1);
	pt = prePt->next;
	if (pt != NULL)
	{
		prePt = pt->next;
		free(pt);
	}
	else
	{
		printf("There is no such a node!\n");
	}
	return head;
}
void PrintLinkList(NODE* head)
{
	NODE* pt = NULL;
	pt = head->next;
	while (pt != NULL)
	{
		printf("%d ", pt->data);
		pt = pt->next;
	}
}