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

//Function to insert a new entry after inside the linkedlist
 void insertEntry(struct entry *listPtr, struct entry *newEntry, int value )
 {
 	
	while ( listPtr != (struct entry *) 0) {
 		if ( listPtr->value == value )
 		{
 			newEntry->next = listPtr->next;
 			listPtr->next = newEntry;
			return;
 			
 		}else {
 			listPtr = listPtr->next;
 		}
 	}
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
	struct entry root, node1, node2, node3, node4;
	struct entry *listPtr = &root;

	root.value = 0;
	root.next = &node1;
	node1.value = 1;
	node1.next = &node2;
	node2.value = 2;
	node2.next = (struct entry *) 0;
	node3.value = 3;
	node4.value = 4;

	printList (listPtr);
	//listPtr = &root;
	printf("\nInserting value %i after value %i\n", node3.value, node2.value);
	insertEntry(listPtr, &node3, 2 );

	printList(listPtr);

	printf("\nInserting value %i after value %i\n", node4.value, root.value);
	insertEntry(listPtr, &node4, root.value );

	printList(listPtr);

	return 0;
}
