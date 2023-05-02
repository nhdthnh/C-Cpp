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
	int y;
	cout << "y tu 0 den 9: ";
	cin >> y;
	for (int i = n; i > x; i--){
		numbers[i] = numbers[i-1];
	}
	numbers[x] = y;
	n++;
	cout<<"mang moi: ";
	for (int i = 0; i < n; i ++){
		cout << numbers[i]<<" ";
	}
}
