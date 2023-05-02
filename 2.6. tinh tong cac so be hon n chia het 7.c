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
        for (i = 7; i<=n; i +=7){
            	sum +=i;}
  	printf ("sum: %d\n",sum);
	return 0;
		}
	}
