#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char answer[100];


	while (true) {
		cout << "�����ϰ������ yes�� �Է��ϼ��� : ";
		cin.getline(answer, 100, '\n');

		if (strcmp(answer, "yes") == 0) {
			cout << "�����մϴ�" << endl;
			break;
		}
	}

}