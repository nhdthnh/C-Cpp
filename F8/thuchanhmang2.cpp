#include <iostream>

using namespace std;
int main(){
	
	int numbers[20];
	int n,x;
	cout << "n = ";
	cin >> n;
	cout <<"nhap mang: ";
	for (int i = 0; i < n; i ++){
		cin >> numbers[i];
	}
	
	cout << "x tu 0 den 9: ";
	cin >> x;
	for (int i = x; i < n-1; i ++){
		numbers[i] = numbers[i+1];
	}
	n--;
	cout<<"mang moi: ";
	for (int i = 0; i < n; i ++){
		cout << numbers[i]<<" ";
	}
}
