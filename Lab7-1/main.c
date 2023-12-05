#define _CRT_SECURE_NO_WARNINGS 1
#include "MyNodeList.h"
int main()
{
	NODE* head = NULL;
	head = HeadInsertBuild(head);
	PrintLinkList(head);
	return 0;
}