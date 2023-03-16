#include <iostream>
#include <cstring>
using namespace std;


int main() {
	int Menu= 0,many=0;
	cout << "***** 승리장에 오신걸환영합니다.\n";
	while (true) {
		cout << "짬뽕:1, 짜장:2, 군만두:3, 종료:4 >>";
		cin >> Menu;
		if (Menu == 1) {
			cout << "몇인분?";
			cin >> many;
			cout << "짬뽕 " << many << "인분 나왔습니다\n";
		}
		else if (Menu == 2) {
			cout << "몇인분?";
			cin >> many;
			cout << "짜장 " << many << "인분 나왔습니다\n";
		}
		else if (Menu == 3) {
			cout << "몇인분?";
			cin >> many;
			cout << "군만두 " << many << "인분 나왔습니다\n";
		}
		else if (Menu == 4) {
			cout << "오늘 영업은 끝났습니다.";
			break;
		}
		else
			cout << "다시 주문하세요!!\n";
	}
	
}