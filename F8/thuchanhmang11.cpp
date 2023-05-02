#include <iostream>
using namespace std;
int main(){
	
	int numbers[20][20];
	int n ,m;
	cout << "n = ";
	cin >> n;
	cout << "m = ";
	cin >> m;
	cout <<"nhap mang 1: "<<endl;
	for (int i = 0; i < n; i ++){
		for (int j = 0; j <m; j++){
		cin >> numbers[i][j];
		}	
	}
	int sum = 0;
	for (int i = 0; i < n; i ++){
		for (int j = 0; j <m; j++){
		if (numbers[i][j] % 2 == 1){
			sum += numbers[i][j];
			}	
		}
	}
	cout << "tong so le: "<<sum;
	cout <<endl;
	return 0;
}
