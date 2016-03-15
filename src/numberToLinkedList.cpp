/*
OVERVIEW:  Given a number convert that to single linked list (each digit as a node).
E.g.: Input: 234, Output: 2->3->4.

INPUTS:  A number.

OUTPUT: Create linked list from given number, each digit as a node.

ERROR CASES: 

NOTES: For negative numbers ignore negative sign.
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int num;
	struct node *next;
};

struct node * numberToLinkedList(int N) {
	if (N < 0)
		N = 0 - N;
	struct node *head=NULL,*n=NULL;
	if (N == 0)
	{
		n = (struct node*)malloc(sizeof(struct node));
		n->num = N;
		n->next = NULL;
		head = n;
	}
	else
	{
		while (N != 0)
		{
			n = (struct node*)malloc(sizeof(struct node));
			n->num = (N % 10);
			N = N / 10;
			if (head == NULL)
			{
				head = n;
				head->next = NULL;
			}
			else
			{
				n->next = head;
				head = n;
			}
		}
	}
	return head;
}