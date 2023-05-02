#include <stdio.h>
int main (){
    int n;
    int i;
    printf("nhap n: ");
	scanf("%d", &n);
	if (n < 0) {
		printf("nhap lai n ");
	}
	else {
		printf ("Day so chan ");
        for (i = 0; i<=n; i+=2){
            printf ("%d ",i);
        }
        printf ("\n");
        printf ("Day so le ");
        for (i = 1; i<=n; i+=2){
            printf ("%d ",i);
        }

    }
}
