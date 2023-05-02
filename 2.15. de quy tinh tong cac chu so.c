#include <stdio.h>

int tinhtong(int n){
	if (n < 10){
	return n;
	}
	else {
	return n%10 + tinhtong(n/10);
	}
	
}

int main(){
	int k;
	printf ("nhap k: ");
	scanf ("%d", &k);
	int kq = tinhtong(k);
	printf ("kq = %d", kq);
	return 0;
}
