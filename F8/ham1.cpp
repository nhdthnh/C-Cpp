#include <iostream>
#include <math.h>

using namespace std;
bool snt(int n){
	for (int i = 2; i < sqrt(n); i++){
		if (n % i == 0){
			return false;
		}
	}
	return true;
}
int main() {
	int n;
	cout <<"n = ";
	cin >> n;
	if (snt(n)){
		cout << "so nguyen to";
	}
	else {
		cout << "khong la so nguyen to";
	}
	return 0;
}
