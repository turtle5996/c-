#include <iostream>
#include <cstring>
using namespace std;


int main() {
	int Menu= 0,many=0;
	cout << "***** �¸��忡 ���Ű�ȯ���մϴ�.\n";
	while (true) {
		cout << "«��:1, ¥��:2, ������:3, ����:4 >>";
		cin >> Menu;
		if (Menu == 1) {
			cout << "���κ�?";
			cin >> many;
			cout << "«�� " << many << "�κ� ���Խ��ϴ�\n";
		}
		else if (Menu == 2) {
			cout << "���κ�?";
			cin >> many;
			cout << "¥�� " << many << "�κ� ���Խ��ϴ�\n";
		}
		else if (Menu == 3) {
			cout << "���κ�?";
			cin >> many;
			cout << "������ " << many << "�κ� ���Խ��ϴ�\n";
		}
		else if (Menu == 4) {
			cout << "���� ������ �������ϴ�.";
			break;
		}
		else
			cout << "�ٽ� �ֹ��ϼ���!!\n";
	}
	
}