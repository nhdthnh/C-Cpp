#include <iostream>
#include <string>

using namespace std;

int main(){
	string str;
	int i = 0;
	cout << "nhap chuoi: ";
	getline (cin, str);
	while (i < str.length()){
		if (str[i] == ' ' && str[i + 1] == ' ' ){
			str.erase(i,1);	
			}
		else {
			i++;
			}
		}
		cout <<"ket qua: "<<str;
		return 0;
	}
