#include <stdio.h>
int main (){
    int n;
    int i;
    int sum = 0,gt = 1;
	scanf("%d", &n);
	if (n < 0) {
		printf("nhap lai n ");
	}
	else {
        for (i = 1; i<=n; i++){
            gt *= i;
            sum +=gt;
    	}	
 	}
  	printf ("giai thua: %lld\n",gt);
  	printf ("sum: %d\n",sum);
	return 0;
}
