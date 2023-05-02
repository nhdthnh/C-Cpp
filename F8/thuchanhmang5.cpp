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
	int max = numbers[0];
	for (int i = 0; i < n; i ++){
		if (numbers[i] > max){
			max = numbers[i];
		}
	}
	cout<<"max: "<<max;
}
