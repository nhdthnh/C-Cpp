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
void LietKe_n_snt(int n){
	printf("%d so nguyen to dau tien: \n", n);
	int i = 2;
	while (n > 0){
		if (kiemtraNT(i)){
			printf ("%d ",i);
			n--;
		}
		i++;
	}
}
void fibonacci(int n) {
  int i;
  long long a = 0, b = 1, c = a + b;
  printf("\n %d so fibonacci dau tien: ",n);
  for (i = 0; i < n; i++) {
    if (i <= 1) {
      c = i;
    } else {
      c = a + b;
      a = b;
      b = c;
    }
	printf("%d ",c);
  }
}
void chinhphuong(int n){
	printf("\n %d so chinh phuong: ",n);
	for (int i = 1; i <= n; i++){
		printf ("%d ", i*i);
	}
}

int main(){
	int n = nhapN();
	LietKe_n_snt(n);
	fibonacci(n);
	chinhphuong(n);
return 0;
}
