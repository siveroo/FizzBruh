#include <iostream>
#include <string>

using namespace std;

int n;

int main(){
	cout << "Enter the value :" << endl;
	cin >> n;
	cout << "==========" << endl;
	for (int i = 1; i <= n; i++) {
		string output;
		if (i % 3 == 0){
			output += "Fizz";
		}
		if (i % 5 == 0){
			output += "Bruh";
		}
		if (output == "") {
			output = to_string(i);
		}
		cout << output << endl;
	}
	system("pause");
	return 0;
}