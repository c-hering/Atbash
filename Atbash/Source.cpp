#include <iostream>
#include <string>
using namespace std;


int main() {
	string input;
	string output;
	int input_length;
	int subtractor;
	while (true) {
		cout << "Enter phrase: ";
		getline(cin, input);
		input_length = input.length();

		for (int i = 0; i < input_length; i++) {
			if (input[i] > 96 && input[i] < 123) {
				subtractor = 2 * (input[i] % 97);
				input[i] = input[i] + (25 - subtractor);
			}
			else if (input[i] > 64 && input[i] < 91) {
				subtractor = 2 * (input[i] % 65);
				input[i] = input[i] + (25 - subtractor);
			}
		}
		cout << input << endl;
	}
}