#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int a, b;
	cout << "두수를 입력하라>>";
	cin >> a >> b;
	if (a >= b)
		cout << "큰수는 = " << a;
	else
		cout << "큰수는 = " << b;
}