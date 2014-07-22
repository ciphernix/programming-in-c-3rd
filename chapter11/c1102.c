/*
 *function insertEntry to insert a new entry into a link list.
 *the procidure takes as arguement a pointer to the list entry to
 *be inserted of type struct entry and pointer to an element in the list after
 *which the new entry is to be inserted
 */
 
 struct entry
 {
 	int value;
 	struct entry *next;
 }
 
 void insertEntry(struct entry *listPtr, *value)
 {
 	while ( listPtr != (struct entry *) 0) {
 		if ( listPtr->value == value )
 		{
 			//?
 		}
 	}