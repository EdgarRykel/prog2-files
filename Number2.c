#include <stdio.h>
int main(){
	int x;
	int y;
	FILE *fp;
	fp = fopen("numbers.txt", "r");
	for (x=1; x< 101; x++){
		fscanf(fp, "%d", &y);
		printf("%d\n",y);
	}
	fclose(fp);
	return 0;
}