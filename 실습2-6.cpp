#include <iostream>
#include <string>
using namespace std;

int main() {
	string PassWord;
	string PassWordCheck;

	

	while (true) {
		cout << "새 암호를 입력하세요>>";
		getline(cin, PassWord);
		cout << "새 암호를 다시한번 입력하세요>>";
		getline(cin, PassWordCheck);
		if (PassWord == PassWordCheck) {
			cout << "같습니다.";
			break;
		}	
		else
			cout << "다릅니다..\t다시\n";
	}
	
}