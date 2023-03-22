#include <iostream>
using namespace std;

class Rentangle {
public:
	int width, height;
	int getArea();
};

int Rentangle::getArea() {
	return width * height;
}

int main() {
	Rentangle rect;
	rect.height = 5;
	rect.width = 3;
	cout << "사각형의 넓이는 " << rect.getArea();
}