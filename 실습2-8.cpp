#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int length = 0;
	char name[100];
	char longname[100];


	cout << "5���� �̸��� ';' �� �����Ͽ� �Է��ϼ��� \n>>";
	for (int i = 0; i < 5; i++) {
		cin.getline(name, 100, ';');
		cout << i+1 << ":" << name<<"\n";
		if (length < strlen(name)) {
			length = strlen(name);
			strcpy_s(longname, name);
		}
	}
	cout << "���� �� �̸��� : " << longname;
}