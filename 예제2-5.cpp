#include <iostream>
using namespace std;

int main() {
    char password[11];
    cout << "��ȣ�� �Է��ϼ���. \n";

    while (true) {
        cout << "��ȣ�Է� : ";
        cin >> password;
        if (strcmp(password, "c++") == 0) {
            cout << "���α׷��� �����մϴ�." << endl;
            break;

        }
        else
            cout << "��й�ȣ�� �ٸ��ϴ�. �ٽ� �õ��ϼ���"<<endl;

    }
}