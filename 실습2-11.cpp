#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int k, n = 0;
	int sum = 0;
	cout << "�� ���� �Է��ϼ���>>";
	cin >> n;
	for (k = 1; k <= n; k++)
		sum += k;
	cout << "1���� " << n << "������  ���� " << sum << "�Դϴ�.";
}