#include<stdio.h>

void main(){
	FILE *fp;
	fp = fopen("old.txt", "w");
	char str[20] = "lorem ipsum";
	fprintf(fp, "%s", str);
	fclose(fp);
	rename("old.txt", "new.txt");
	remove("new.txt");	
}
