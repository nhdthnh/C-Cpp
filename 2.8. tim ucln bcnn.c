#include <stdio.h>
int main (){
	int a,b;
	printf ("nhap a va b: ");
	scanf ("%d %d", &a, &b);
	if ( a >= 0 && b >= 0){
		if (a == 0 && b == 0){
		printf ("ko ton tai bcnn, ucln \n");
		}
		else if (a == 0 || b == 0){
			printf ("ko ton tai bcnn, ucln = %d \n", (a==0) ? b : a);
		}
		else {
			int bc  = a*b;
			while (a != b ){
			if (a > b)
				a = a - b;
			else
				b = b - a;
			}
			printf ("UCLN: %d \n", a);
			printf ("BCNN: %d", bc/a);
		}
	}
		
}
