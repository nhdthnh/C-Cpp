#include <stdio.h>
int main (){
    int n;
    int i;
    int sum = 0,s1,s2;
	scanf("%d", &n);
	if (n < 0) {
		printf("nhap lai n ");
	}
	else {
        for (i = 0; i<=n; i++){
            sum += i;
            if (i % 2 == 0){
            	s1 += i;
        }
        else{
        	s2 += i;
		}
    }
 }
  	printf ("tong: %d\n",sum);
    printf ("tong chan: %d\n",s1);
    printf ("tong le: %d\n",s2);
}
