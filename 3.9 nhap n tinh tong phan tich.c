#include <stdio.h>
#include <math.h>

int nhapN (){
	int n;
	while (n <= 0){
	printf ("nhap n > 0: ");
	scanf ("%d", &n);
	}
	return n;
}

int Sum (int n){
	int sum  = 0;
		while (n > 0)
		{
		 	sum += n % 10;
		 	n /=10;
		}
		return sum;
	}
	
void phantich(int n)
{
	int i = 2;
	printf("\nPhan tich n ra thua so nguyen to: ");
	printf("\n%d = ", n);
	while (i <= n)
	{
		if (n%i == 0){
			printf("%5d", i);
			n /= i;
		}
		else
		i++;
	}
}

int main (){
	int n = nhapN();
	printf ("sum: %d \n", Sum(n));
	printf ("phan tich: ");
	phantich(n);
	return 0;
}	
