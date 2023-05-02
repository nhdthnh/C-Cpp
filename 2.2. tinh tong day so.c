#include <stdio.h>
int main (){
    int n;
    int i;
    int sum = 0;
	scanf("%d", &n);
	if (n < 0) {
		printf("nhap lai n ");
	}
	else {
        for (i = 0; i<=n; i++){
            sum += i;
        }
    printf ("tong: %d",sum);
    }
}
