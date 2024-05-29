#include <stdio.h>
#include <string.h>
#define FILE_SIZE 2048
char *read_file(char *filename){
	FILE *fptr;
	fptr = fopen(filename, "r");
	char file_contents[FILE_SIZE];
	while(fgets(file_contents, FILE_SIZE, fptr)) {
	  printf("%s", file_contents);
	}
	fclose(fptr);
	return file_contents;
}
char *read_file_line(char *filename){
	FILE *fptr;
	fptr = fopen(filename, "r");
	char file_contents[FILE_SIZE];
	fgets(file_contents, FILE_SIZE, fptr);
	printf("%s",file_contents);
	fclose(fptr);
	return file_contents;
}


int read_line_until_c(char *filename,int ch)
{
	FILE *fptr;
	fptr = fopen(filename, "r");
	int file_contents;	
		do{
			file_contents = fgetc(fptr);
			printf("%c",file_contents);
		}while( file_contents != ch);

	fclose(fptr);
	return file_contents;
}



void create_file_null(char *filename){
	FILE *fptr;
	fptr = fopen(filename, "w");
	fclose(fptr);

}



void create_file_full(char *filename,char *inside){
	FILE *fp;
	fp = fopen(filename,"w");
	fprintf(fp,inside);
	fclose(fp);	
}
