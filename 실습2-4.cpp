#include <iostream>
#include <cstring>
using namespace std;

int main() {
	float a[4], emty;
	cout << "5개의 실수를 입력하라>>";
	cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];
	emty = a[4];
	for (int i = 0; i < 4; i++) {
		if (emty < a[i])
			emty = a[i];
		else;
	}
	cout << "제일 큰 수 =" << emty << endl;
}
