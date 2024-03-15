#include <stdio.h>
#include <string.h>
int main(){
	char fName[16] ;
	char Dot[1] = ".";
	int y;
	int checkDot = 0;
	printf("enter file name (15 char including .txt): ");
	scanf("%s", fName);
	for (y = 0; y < 16 && checkDot == 0; y++){
		if (fName[y] == Dot[0]){
			checkDot = 1;
		}
	}
	
	if (checkDot == 0){
		strcat(fName, ".txt");
	}
	
	FILE *fp;
	fp = fopen(fName, "r");
	if (fp == NULL){
		printf("file not found");
	}
	else{
		printf("file exists");
	}	
	fclose(fp);
	
	return 0;
}