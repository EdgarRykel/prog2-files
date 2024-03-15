#include <stdio.h>
int main(){
	int x;
	FILE *fp;
	fp = fopen("numbers.txt", "w");
	for (x=1; x< 101; x++){
		fprintf(fp, "%d\n", x);
	}
	fclose(fp);
	return 0;
}