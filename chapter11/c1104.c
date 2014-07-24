/*
 *Chapter11 execrise 4.
 */

#include <stdio.h>

 struct entry
 {
 	int value;
 	struct entry *next;
 };
 
 struct entry *root;  // use to always points to the first node
 
//Function to remove the entry after the node
void removeEntry (struct entry *node)
{
	struct entry *temp;
	
	//lets remove root if null is specified
	if (node == (struct entry *) 0)
	{	
		root = root->next;
		return ;
	}
	//remove next node here
	temp = node->next;
	node->next = temp->next;
}

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
	insertEntry((struct entry *) 0, &node4 );

	printList(root);

	printf("Removing value after %i\n",node1.value);
	
	removeEntry(&node1);
	printList(root);	
	
	printf("Removing the first node %i\n",root->value);
	
	removeEntry((struct entry *) 0);
	printList(root);	
	
	return 0;
}
