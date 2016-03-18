/*
OVERVIEW: Given an unsorted single linked list, sort the linked list without using extra array or linked list.
E.g.: 4->2->1->5->3, output is 1->2->3->4->5.

INPUTS: An unsorted single linked list.

OUTPUT: Sort the linked list.

ERROR CASES: Return NULL for error cases.

NOTES: Without using extra array or linked list.
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * sortLinkedList(struct node *head) {
	struct node *temp, *temp1;
	int tn;
	temp1 = head;
	if (head == NULL)
		return NULL;
	while (head->next != NULL)
	{
		temp = head->next;
		while (temp != NULL)
		{
			if (head->num > temp->num)
			{
				tn = head->num;
				head->num = temp->num;
				temp->num = tn;
			}
			temp = temp->next;
		}
		head = head->next;
	}
	return temp1;
}