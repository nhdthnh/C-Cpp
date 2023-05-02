#include <iostream>
using namespace std;
int main(){
	
	int numbers1[20][20], numbers2[20][20];
	int n ,m;
	cout << "n = ";
	cin >> n;
	cout << "m = ";
	cin >> m;
	cout <<"nhap mang 1: "<<endl;
	for (int i = 0; i < n; i ++){
		for (int j = 0; j <m; j++){
		cin >> numbers1[i][j];
		}	
	}
	cout <<"nhap mang 2: "<<endl;
	for (int i = 0; i < n; i ++){
		for (int j = 0; j <m; j++){
		cin >> numbers2[i][j];
		}	
	}
	cout <<"tong 2 mang: "<<endl;
	for (int i = 0; i < n; i ++){
		for (int j = 0; j <m; j++){
		cout << numbers1[i][j] + numbers2[i][j] << " ";
		}	
		cout << endl;
	}
	
	return 0;
}
