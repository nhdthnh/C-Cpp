#include <stdio.h>
#include <math.h>
int main (){
	int n;
	printf ("nhap n: ");
	scanf ("%d", &n);
	if (n < 2){
		printf ("%d ko la so nguyen to",n);
	}
	else {
		int m= 1;
		int i;
		for (i = 2; i <= sqrt(n); i++){
			if (n % i == 0){
				m = 0;
				break;
			}
			}
			if (m == 1){
				printf ("%d la so nguyen to", n);
			}
			else{
				printf ("%d ko la so nguyen to",n);
			}
			}
		}
