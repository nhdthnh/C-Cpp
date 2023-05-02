#include <iostream>
#include <math.h>

using namespace std;
bool snt(int n){
	for (int i = 2; i <= sqrt(n); i++){
		if (n % i == 0){
			return false;
		}
	}
	return true;
}
int sum(int n){
	if (n  == 2){
		return 2;
	}
	
	if (snt(n)){
		return n + sum(n - 1);
	}
	
	return sum(n - 1);
}


int main() {
	int n;
	cout <<"n = ";
	cin >> n;
	cout << sum(n);
	return 0;
}
