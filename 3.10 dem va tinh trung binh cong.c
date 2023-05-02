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

int count (int n){
	int count = 0;
	while (n > 0){
		count++;
		n /= 10;
		
	}
		return count;
	}
	
int demle (int n){
	int count = 0;
	int c;
	while (n > 0){
		c = n % 10;
		if (c % 2 != 0){
			count++;
		}
			n /= 10;
	}
		return count;
	}
float tb(int n){
	float tb = 0;
	int sum = 0;
	int sl = count(n);
	while (n > 0){
		sum += n%10;
		n /= 10;
		}
	return tb = (float) sum / sl;
}
	
int main (){
	int n = nhapN();
	printf ("sl = %d\n", count (n));
	printf ("dem le = %d\n", demle(n));
	printf ("trung binh cong = %0.2f", tb(n));
		return 0;	
}
