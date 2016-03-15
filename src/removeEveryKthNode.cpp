/*
OVERVIEW: Given a single linked list, remove every Kth node in the linked list.
E.g.: 1->2->3->4->5 and K 2, output is 1->3->5.

INPUTS: A linked list and Value of K.

OUTPUT: Remove every Kth node in the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * removeEveryKthNode(struct node *head, int K) {
	int count = 1;
	struct node *temp1;
	if (K < 0||head==NULL)
		return NULL;
	temp1 = head;
	while (temp1->next != NULL)
	{
		temp1 = temp1->next;
		count++;
		if (count == K)
		{
			head->next = temp1->next;
			temp1 = temp1->next;
			count = 1;
			head = head->next;
		}
	}
}