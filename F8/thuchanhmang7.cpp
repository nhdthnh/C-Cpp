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
	int sum = 0;
	for (int i = 0; i < n; i ++){
		
		for (int j = 0; j <m; j++){
			if (i == 0 || j == 0 || i == n - 1 || j == m -1){
			sum += numbers[i][j];
			}
		}			
	}
	cout << sum << " ";
	return 0;
}
