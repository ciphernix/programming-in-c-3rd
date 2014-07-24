/*
 *Chapter 11 problem 5: double linklist
 */
 
 #include <stdio.h>
 
struct entry {
 	int value;
 	struct entry *next;
 	struct entry *prev;
 	};
 
struct entry *root; //to mark the begnning of our list
struct entry *last; //to point to the last node;
 
//function to print linked list starting at node
void printList(struct entry *node)
{
	while (node != (struct entry *) 0)
 	{
 		printf("%i\n", node->value);
 		node = node->next;
 	}
}
 
//function to print linked list in reverse
//function will stop at the root node
void reversePrint(struct entry *node)
{
	while (node != (struct entry *) 0 )
	{
		printf("%i\n", node->value);
		node = node->prev;
	}
}

//function to insert values
void insertValue(struct entry *node)
{
	int i = 0;
	while (node != (struct entry *) 0)
	{
		node->value = i;
		i++;
		node = node->next;
	}
}

int main(void)
{
	struct entry node0, node1, node2, node3, node4;
	root = &node0;
	last = &node4;
	
	node0.prev = (struct entry *) 0; //first node on our list
	node1.prev = &node0;
	node2.prev = &node1;
	node3.prev = &node2;
	node4.prev = &node3;
	
	node0.next = &node1;
	node1.next = &node2;
	node2.next = &node3;
	node3.next = &node4;
	node4.next = (struct entry *) 0;
	
	insertValue(root);
	root = &node0;
	printf("Printing values\n");
	printList(root);
	printf("Printing reverse values\n");
	reversePrint(last);
	
	return 0;
	
	
}
