#include <iostream>
using namespace std;

int main() {
	for (int i = 1; i < 10; i++) {
		for (int n = 1; n < 10; n++)
			cout << i << "x" << n <<"=" << n * i << "\t";
		cout << "\n" << endl;
	}
	
}