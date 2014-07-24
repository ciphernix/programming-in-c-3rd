/*
 *function insertEntry to insert a new entry into a link list.
 *the procidure takes as arguement a pointer to the list entry to
 *be inserted of type struct entry and pointer to an element in the list after
 *which the new entry is to be inserted
 */

#include <stdio.h>

 struct entry
 {
 	int value;
 	struct entry *next;
 };
 
 struct entry *root;  // use to always points to the first node

//Function to insert a new entry after the specified node
 void insertEntry(struct entry *node, struct entry *newEntry )
 {
 	struct entry *temp;
 	
 	//insert at the begining if null is specified
 	if (node == (struct entry *) 0)
 	{
 		newEntry->next = root;
 		root = newEntry;
 		return;
 	}
 	
 	newEntry->next = node->next;
 	node->next = newEntry;
 }

//function to print a linked list 
void printList ( struct entry *listPtr)
{

	while (listPtr != (struct entry *) 0)
	{
		printf("%i\n",listPtr->value);
		listPtr = listPtr->next;
	}

}

int main (void)
{
	struct entry  node0, node1, node2, node3, node4;
	root = &node0;

	node0.value = 0;
	node0.next = &node1;
	node1.value = 1;
	node1.next = &node2;
	node2.value = 2;
	node2.next = (struct entry *) 0;
	node3.value = 3;
	node4.value = 4;

	printList (root);
	
	printf("\nInserting value %i after value %i\n", node3.value, node2.value);
	insertEntry(&node2, &node3);

	printList(root);

	printf("\nInserting value %i at the beginning\n", node4.value);
	insertEntry(&node4,(struct entry *) 0 );

	printList(root);
	
	return 0;
}
