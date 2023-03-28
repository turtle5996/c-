#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	double getArea();
	Circle();
	Circle(int r);
	//void Circle(short r); void지정으로 인해 오류가 생김 
};
Circle::Circle() { radius = 1; }
Circle::Circle(int r) { radius = r; }//line 12,13은 코드를 실행시키기위해 넣음 
double Circle::getArea() {
	return 3.14 * radius * radius;
}
int main() {
	Circle wa;
	Circle pi(30);
	double b = pi.getArea();
	cout << b << endl;
}