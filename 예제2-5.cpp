#include <iostream>
using namespace std;

int main() {
    char password[11];
    cout << "암호를 입력하세요. \n";

    while (true) {
        cout << "암호입력 : ";
        cin >> password;
        if (strcmp(password, "c++") == 0) {
            cout << "프로그램을 종료합니다." << endl;
            break;

        }
        else
            cout << "비밀번호가 다릅니다. 다시 시도하세요"<<endl;

    }
}