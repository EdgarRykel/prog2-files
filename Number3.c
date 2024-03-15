#include <stdio.h>
int main(){
	int x;
	int y;
	FILE *fp1;
	FILE *fp2;
	fp1 = fopen("numbers.txt", "r");
	fp2 = fopen("copycat.txt", "w");
	for (x=1; x< 101; x++){
		fscanf(fp1, "%d", &y);
		fprintf(fp2, "%d\n",y);
	}
	fclose(fp1);
	fclose(fp2);
	return 0;
}