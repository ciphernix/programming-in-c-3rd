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