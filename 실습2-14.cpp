#include <iostream>
#include <cstring>
using namespace std;


int main() {
	int many=0,Total=0;
	char coffee[100];
	cout << "���������� 2000��, �Ƹ޸�ī�� 2300��, īǪġ�� 2500���Դϴ�.\n";
	while (true) {
		cout << "�ֹ�>> ";
		cin >> coffee >> many;
		if (strcmp(coffee, "����������") == 0) {
			Total += 2000 * many;
			cout << 2000 * many << "�� �Դϴ�. ���ְԵ弼��\n";
			if (Total >= 20000) {
				cout << "���� " << Total << "���� �Ǹ��Ͽ� ī�並 �ݽ��ϴ�. ���Ϻ���~~";
				break;
			}
		}
		else if (strcmp(coffee, "�Ƹ޸�ī��") == 0) {
			Total += 2300 * many;
			cout << 2300 * many << "�� �Դϴ�. ���ְԵ弼��\n";
			if (Total >= 20000) {
				cout << "���� " << Total << "���� �Ǹ��Ͽ� ī�並 �ݽ��ϴ�. ���Ϻ���~~";
				break;
			}
		}
		else if (strcmp(coffee, "īǪġ��") == 0) {
			Total += 2500 * many;
			cout << 2500 * many << "�� �Դϴ�. ���ְԵ弼��\n";
			if (Total >= 20000) {
				cout << "���� " << Total << "���� �Ǹ��Ͽ� ī�並 �ݽ��ϴ�. ���Ϻ���~~";
				break;
			}
		}
		
		else
			cout << "���� �ﴺ�Դϴ� �˼��մϴ�.\n";

	}
	
}