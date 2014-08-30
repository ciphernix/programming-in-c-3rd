#include "stdio.h"
#include "string.h"
#include "stdlib.h"

int main(){
	int mem=64;
	char *str=malloc(mem);
	fgets(str,mem,stdin);
	while(str[strlen(str)-1]!='\n'){//checks if we ran out of space
		mem*=2;
		str=realloc(str,mem);//double the amount of space
		fgets(str+mem/2-1,mem/2+1,stdin);//read the rest (hopefully) of the line into the new space.
	}
	printf("%s",str);
}