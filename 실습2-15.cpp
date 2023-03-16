#include <iostream>
#include <string>

using namespace std;

int main() {
	char word[100];
	int num1, num2;
	char* op, * context;

	while (true) {
		cout << "? ";
		cin.getline(word, 100);
		num1 = atoi(strtok_s(word, " ", &context));
		op = strtok_s(NULL, " ", &context);
		num2 = atoi(strtok_s(NULL, " ", &context));

		switch (*op) {
		case '+':
			cout << num1 << op << num2 << "=" << num1 + num2 << endl;
			break;
		case '-':
			cout << num1 << op << num2 << "=" << num1 - num2 << endl;
			break;
		case '/':
			cout << num1 << op << num2 << "=" << num1 / num2 << endl;
			break;
		case '*':
			cout << num1 << op << num2 << "=" << num1 * num2 << endl;
			break;
		case '%':
			cout << num1 << op << num2 << "=" << num1 % num2 << endl;
			break;
		default:
			break;
		}
	}




}