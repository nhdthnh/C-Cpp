#include <iostream>
#include <math.h>

using namespace std;


long long gt(int n){
	long long kq;
	for (int i = 1; i <= n; i++){
		if (n == 1){
			return 1;
		}
		else {
			kq *= i;
		}
	}
	return kq;
}

long long gt1 (int n){
	if (n == 1){
		return 1;
	}
	return n *gt1(n-1);
}

int main (){
	int n;
	cout << "n = ";
	cin >> n;
	cout <<"n! = " << gt(n) << endl;
	cout <<"de quy n! = "<<gt1(n);
}
