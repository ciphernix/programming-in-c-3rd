/*
 *Chapter 11 problem 6: double linklist
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
	while (node->next != (struct entry *) 0)
 	{
 		printf("%i\n", node->value);
 		node = node->next;
 	}
}
 
//function to print linked list in reverse
//function will stop at the root node
void reversePrint(struct entry *node)
{
	while (node->prev != node )
	{
		printf("%i\n", node->value;);
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

//inserts new node after entry
void insertEntry(struct entry *node, struct entry *newEntry)
{
	//if node == null, insert newentry at root
	if (node == (struct entry *) 0 )
	{
		newEntry->next = root->next;
		newEntry->prev = root->prev;
		return ;
	}
	
	newEntry->next = node->next;
	newEntry->prev = node;
	node->next = newEntry;
}

//function to remove entry
void removeEntry(struct entry *node)
{
	struct entry *temp;
	if (node == node->prev ) //removing root node
	{
		root = node->next;
		root->prev = node->next;
		return;
	}
	
	if (node == last) //removing the last node
	{
		last = node->prev;
		last->next = node->next; //null
		return;
	}
	
	temp = node->prev;
	temp->next = node->next;
	
	temp = node->next;
	temp->prev = node->prev;	
	
}


int main(void)
{
	struct entry node0, node1, node2, node3, node4;
	root = &node0;
	last = &node4;
	
	node0.prev = &node0; //first node on our list
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
	printf("Printing values\n");
	printList(root);
	printf("Printing reverse values\n");
	reversePrint(last);
	
	printf("Remove node %i\n", node2.value);
	removeEntry(&node2);
	printList(root);
	
	printf("Insert node %i after node %i\n",node2.value, node1.value);
	insertEntry(&node1, &node2);
	printList(root);
	
	printf("Remove node %i and insert it at the top\n" node4.value);
	removeEntry(&node4);
	insertEntry((struct entry *) 0, &node4);
	printList(root);
	
	return 0;
	
}