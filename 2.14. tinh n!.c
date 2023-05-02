#include <stdio.h>
int main(){
	long n ;
	printf ("nhap n: ");
	scanf ("%ld", &n);
	int i;
	long gt;
	for (i = n; i > 1; i--){
		gt *= i;
	}
	printf ("%ld",gt);
	
	return 0;
}
