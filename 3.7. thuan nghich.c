#include <stdio.h>
#include <stdbool.h>

bool thuannghich (int n){
	int m = n;
	int tg = 0;
	while (n > 0){
		tg = tg * 10 + n % 10;
		n /= 10;
	}
	return tg == m;
}
bool chiaHet (int n, int k){
	if (k == 0){
		return false;
	}
	return n % k == 0;
	
}
int main(){
	int i,k;
	scanf("%d", &k);
	for (i = 1; i< 99999999;i++){
		if (thuannghich(i) && chiaHet(i,k)){
			printf ("%10d", i);
		}
	}
return 0;
}
