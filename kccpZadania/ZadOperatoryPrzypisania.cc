#include <iostream>

using namespace std;

void A() {
	int x = 10;
	int y = 3;

	float result[10];
	result[0] = x * ++y;
	result[1] = 32%5 + 7/2;
	cout << "result[0] = " << result[0] << endl;
	cout << "result[1] = " << result[1] << endl;
}

void B() {
	int x = 5;
	int y = 6;

	float result[10];
	result[0] = 3;
	result[0] *=5;
	cout << "result[0] = " << result[0] << endl;
	result[1] = (int)result[0]%y;
	result[1] /= 2;
	cout << "result[1] = " << result[1] << endl;
}

int main(int argc, char *argv[]) {
	B();

	return 0;
}
