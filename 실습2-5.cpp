#include <iostream>
using namespace std;

int main() {
	char s[100];
	int count = 0;
	cout << "���ڸ� �Է��϶�(100 �� �̸�).\n";
	cin.getline(s, 100);
	
	for (int i = 0; i < 100; i++) {
		if (s[i]=='x') {
			count++;
		}
	}
	cout << "x�� ������? :" << count << endl;
}