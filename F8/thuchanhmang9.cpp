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
	cout << "k = ";
	cin >> k;
	int x = -1, y = -1;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			if ( i != j && (numbers[i]+numbers[j] == k))
			{
				x = i;
				y = j;
				break;
			}
		}
		if (x != -1 && y != -1)
		{
			break;
		}	
	}
		if (x != -1 && y != -1){
			cout << x << " " << y;
		}
		else{
			cout << "khong co";
		}
	}
