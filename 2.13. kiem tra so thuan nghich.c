#include <stdio.h>
int main(){
	long n;
	printf ("nhap n: ");
	scanf ("%ld", &n);
	long dao = 0;
	long m = n;
	while(m > 0) {
         dao = dao * 10 + m % 10;
          m /= 10;
}
	if(dao == n){
		printf("la so thuan nghich");
	}
	else {
		printf ("ko la so thuan nghich");
	}
	return 0;
}
