#include <iostream>
#include <string>

using namespace std;

int main(){
	string str;
	cout << "nhap chuoi: ";
	getline (cin, str);
	for (int i = 0; i < str.length(); i++){
		if (str[i] >= 97 && str[i]<=122){
			str[i] = str[i] - 32;
		}
	}
	cout <<"ket qua: "<<str;
	}
