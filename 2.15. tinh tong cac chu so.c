#include <stdio.h>
int main(){
	long n;
	long sum = 0;
	printf ("nhap n: ");
	scanf ("%ld", &n);
	while (n>0){
	
	sum += n%10;
	n /=10;
	}
	printf ("%ld",sum);
	return 0;
}
