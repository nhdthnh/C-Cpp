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

int lietkeuoc(int n){
	int i;
	printf ("\n cac uoc cua n: ");
	for(i = 1; i <= n; i++) {
		if(n % i == 0) {
			printf("%3d", i);
		}
	}
	return i;
}
int demuoc(int n){
	int i;
	int count = 0;
	printf ("\n so luong uoc cua n: ");
	for(i = 1; i <= n; i++) {
		if(n % i == 0) {
			count++;	
		}	
	}
	printf ("%d", count);
	return count;
	
}
bool kiemtraNT(int n){
	if (n < 2){
		return false;
	}
	else {
		int i;
		for (i = 2; i <= sqrt(n); i++){
			if (n % i == 0){
				return false;
			}
	}
	return true;
}
}


void lietkeUocNT(int n){
	int i;
	printf("\n cac uoc nt cua n: ");
	for (i = 1; i <= sqrt(n);i++){
		if (n % i == 0){
			if(kiemtraNT(i)){
				printf("%d ", i);
			}
			if(kiemtraNT(n / i) && i != (n/i)) {
				printf("%5d", n / i);
			}
		}
	}
}

int main(){
	int n = nhapN();
	lietkeuoc(n);
	demuoc(n);
	lietkeUocNT(n);
return 0;
}
