#include <iostream>
#include <string>
using namespace std;

int main() {
	string PassWord;
	string PassWordCheck;

	

	while (true) {
		cout << "�� ��ȣ�� �Է��ϼ���>>";
		getline(cin, PassWord);
		cout << "�� ��ȣ�� �ٽ��ѹ� �Է��ϼ���>>";
		getline(cin, PassWordCheck);
		if (PassWord == PassWordCheck) {
			cout << "�����ϴ�.";
			break;
		}	
		else
			cout << "�ٸ��ϴ�..\t�ٽ�\n";
	}
	
}