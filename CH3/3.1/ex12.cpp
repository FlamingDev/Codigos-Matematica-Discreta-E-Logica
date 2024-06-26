#include <iostream>
using namespace std;

/*Describe an algorithm that uses only assignment state
mentsthatreplacesthetriple (x,y,z) with (y, z, x). What is
 the minimum number of assignment statements needed?*/

void swap_triple(int& x, int& y, int& z) {
	int temp = x;
	x = y;
	y = z;
	z = temp;
}

int main() {
	int x = 5, y = 10, z = 15;
	swap_triple(x, y, z);
	cout << x << " " << y << " " << z;
}
