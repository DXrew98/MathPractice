#include "iostream"
#include "Vectors1.h"

int main() {

	Point p;
	p.x = 0;
	p.y = -1;

	Point i;
	i.x = 1;
	i.y = 1;

	Vector v2 = p - i;

	std::cout << "result: (" << v2.x << ", " << v2.y << ")" << std::endl;
	system("pause");
	return 0;
}