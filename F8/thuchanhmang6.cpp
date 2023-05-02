#include <iostream>

using namespace std;
int main(){	
	int numbers[20][20];
	int n ,m ,x;
	cout << "n = ";
	cin >> n;
	cout << "m = ";
	cin >> m;
	cout <<"nhap mang: "<<endl;
	for (int i = 0; i < n; i ++){
		for (int j = 0; j <m; j++){
		cin >> numbers[i][j];
		}	
	}
	for (int i = 0; i < n; i ++){
		int max = numbers[i][0];
		for (int j = 0; j <m; j++){
			if (numbers[i][j] > max){
			max =  numbers[i][j];
			}
		}	
			cout << max << " ";
	}
	return 0;
}
