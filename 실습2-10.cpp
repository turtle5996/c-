#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char str[100];
	
	cout << "���ڿ� �Է� : ";
	cin.getline(str, 100);
	for (int i = 0; i < strlen(str); i++) {
		for (int n = 0; n < i+1; n++)
		{
			cout << str[n];
			
		}
		cout << "\n";
		if (str[i] == '\0')
			break;
		
	}
}