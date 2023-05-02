#include <stdio.h>
#include <stdbool.h>



bool thuannghich(int n){
	long dao = 0;
	long m = n;
	while(m > 0) {
         dao = dao * 10 + m % 10;
          m /= 10;
	}
	return dao == n;
}

bool khongchuaso6(int n) {
	int c;
	while(n > 0) {
		c = n % 10;
		n /= 10;
		if(c == 6) {
		return true;
	}
	}
	
	return false;
}


bool tongchia6(int n) {
	int sum = 0;
	while(n > 0) {
		sum += n % 10;
		n /= 10;
	}

	return sum % 6 == 0;
}


int main(){
	int i;
	for(i = 1; i <= 1000; i++) {
		if(thuannghich(i) && khongchuaso6(i) && tongchia6(i)) {
			printf("%10d", i);
		}
	}
	return 0;
}
