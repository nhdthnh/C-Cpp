#include <stdio.h>
int main(){
int m,n;
scanf ("%d %d", &m, &n);
if( m < 0 || n < 0){
	printf ("nhap lai");
}
else 
for (int i = 1; i <= m; i++){
	for (int j = 1; j <= n; j++){
		printf (" x ");
	
	}
		printf ("\n");
		}
	return 0;
}
