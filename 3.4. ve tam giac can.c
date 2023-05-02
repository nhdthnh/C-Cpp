#include <stdio.h>
#include <math.h>
int main() {
	int h;
	printf("Nhap vao chieu cao h: ");
	scanf("%d", &h);
	
	if(h > 0) {
		int i, j;
		for(i = 1; i <= h; i++) {
			for(j = 1; j <= (2*h - 1); j++) {
				if (abs(h-j) <= (i-1)){
					printf("%3d", i - abs(h - j));
					}
					else
					printf ("   ");
			}
			printf("\n");
		}
	} else {
		printf("Nhap vao so duong h!");
	}
	
	return 0;
}
