#include <iostream>
#include <cstring>
using namespace std;

int main() {
	float a[4], emty;
	cout << "5���� �Ǽ��� �Է��϶�>>";
	cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];
	emty = a[4];
	for (int i = 0; i < 4; i++) {
		if (emty < a[i])
			emty = a[i];
		else;
	}
	cout << "���� ū �� =" << emty << endl;
	return 0;
}