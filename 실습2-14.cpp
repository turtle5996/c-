#include <iostream>
#include <cstring>
using namespace std;


int main() {
	int many=0,Total=0;
	char coffee[100];
	cout << "에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원입니다.\n";
	while (true) {
		cout << "주문>> ";
		cin >> coffee >> many;
		if (strcmp(coffee, "에스프레소") == 0) {
			Total += 2000 * many;
			cout << 2000 * many << "원 입니다. 맛있게드세요\n";
			if (Total >= 20000) {
				cout << "오늘 " << Total << "원을 판매하여 카페를 닫습니다. 내일봐요~~";
				break;
			}
		}
		else if (strcmp(coffee, "아메리카노") == 0) {
			Total += 2300 * many;
			cout << 2300 * many << "원 입니다. 맛있게드세요\n";
			if (Total >= 20000) {
				cout << "오늘 " << Total << "원을 판매하여 카페를 닫습니다. 내일봐요~~";
				break;
			}
		}
		else if (strcmp(coffee, "카푸치노") == 0) {
			Total += 2500 * many;
			cout << 2500 * many << "원 입니다. 맛있게드세요\n";
			if (Total >= 20000) {
				cout << "오늘 " << Total << "원을 판매하여 카페를 닫습니다. 내일봐요~~";
				break;
			}
		}
		
		else
			cout << "없는 몌뉴입니다 죄송합니다.\n";

	}
	
}