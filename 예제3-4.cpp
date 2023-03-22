#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	Circle();
	Circle(int r);
	double getArea();
};

Circle::Circle():Circle(1) {}

Circle::Circle(int r) {
	radius = r;
	cout << "반지름 " << radius << "인 원 생성" << endl;
}

double Circle::getArea() {
	return radius * radius * 3.14;
}


int main() {
	Circle donut;
	double area = donut.getArea();
	cout << "도넛의 면적은 " << area << "입니다." << endl;

	int i = 0;
	cout << "피자 면적을 입력하세요. >>";
	cin >> i; //원래는 피자의 면적이 30 고정이지만 직접 입력받는것으로 바꾸어봄
	Circle pizza(i);
	area = pizza.getArea();
	cout << "피자의 면적은 " << area << "입니다." << endl;
}