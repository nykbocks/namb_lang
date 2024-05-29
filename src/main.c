#include <stdio.h>
#include "include/file_funcs.c"
#include <string.h>
int main(){
	FILE *fptr;
	fptr = fopen("test.txt", "r");
	int file_contents;
	char cur[50];
	int i = 0;
	while(1) {
		file_contents = fgetc(fptr);
	
		cur[i] = file_contents;
		if (file_contents == 'end'){
			break;
		}
		printf("%s\n",cur);
		if ( (strcmp(cur,"put(") ) == 0){
			printf("put(");
		} else {
			strcpy(cur,"");
		}
		if ( (strcmp(cur,"end") ) == 0){
			printf("put(");
		}
		++i;
	}
	fclose(fptr);
	return 0;
}
