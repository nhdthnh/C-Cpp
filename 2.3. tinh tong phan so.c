#include <stdio.h>
#include <math.h>
int main (){
    int n;
    int i;
    float sum;
    printf("nhap n ");
	scanf("%d", &n);
	if (n < 0) {
		printf("nhap lai n ");
	}
	else {
        for (i = 1; i<=n; i++){
            sum += (float)1/i;
        }
    printf ("tong: %.2f",sum);
    }
}
