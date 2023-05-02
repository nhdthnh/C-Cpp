#include <stdio.h>
#include <math.h>

int main (){
	int m,n;
	printf ("nhap m va n: ");
	scanf ("%d %d", &m, &n);
if (m >= 0 && m < n){
	int start  = sqrt(m);
	start = (start*start == m)?start:start+1;
	int end = sqrt(n);
	int count = 0;
	int i;
	for (i =  start ; i <= end; i++){
		printf("%d ", i*i);
		count++;
	}
	printf("count: %d", count);
	}
	else {
		printf ("nhap lai");
	}
			return 0;
}
