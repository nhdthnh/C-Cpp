#include <iostream>

using namespace std;
int main(){
	
	int numbers[20];
	int n,k;
	cout << "n = ";
	cin >> n;
	cout <<"nhap mang: ";
	for (int i = 0; i < n; i ++){
		cin >> numbers[i];
	}
	for (int i = n - 1; i > 0; i--){
		for (int j = 0; j < i; j++){
			if (numbers[j] < numbers[j + 1])
			{
				int tmp = numbers[j];
				numbers[j] = numbers[j+1];
				numbers[j+1] = tmp;
			}
		}
	}
	for (int i = 0; i < n; i ++){
		cout << numbers[i]<<" ";
	}
	}
