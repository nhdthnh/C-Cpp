#include <stdio.h>
int main(){
	double c,x;
	printf("nhap x va c: ");
	scanf ("%lf %lf",&x, &c);
	long long kgiaithua = 1;
	int k = 0;
	double xMuk = 1;
	double kq = 0;
	double tam = xMuk / kgiaithua;
	while (tam >= c){
		kq += tam;
		k++;
		xMuk *= x;
		kgiaithua *=k;
		tam = xMuk / kgiaithua; 
	}
	printf ("e^%.2lf = %lg",x, kq);
	return 0;
	
}
