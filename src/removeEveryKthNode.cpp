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
	int count = 0;
	struct node *temp1,*temp2;
	if (K <= 1||head==NULL)
		return NULL;
	temp1 = head;
	temp2 = head;
	while (temp1!=NULL)
	{
		count++;
		if (count%K == 0)
		{
			temp1 = temp1->next;
			while (temp1 != temp2->next->next&&temp2->next!=NULL)
			{
				temp2 = temp2->next;
			}
			temp2->next = temp1;
			count = 1;
		}
		if (temp1 != NULL)
			temp1 = temp1->next;
	}
	return head;
}
