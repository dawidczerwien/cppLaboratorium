#include <iostream>

using namespace std;

void A() {
	int x = 1;
	int y = 2;
	int z = 3;
	int result[] {4,4,4,4};

	result[0] *= -++x*x--+-y--%++z;
	cout <<"0. "<< result[0] << endl;

	result[1] *= -(++x)*(x--)+-(y--)%(++z);
	cout <<"1. "<< result[1] << endl;

	result[2] *= (-(++x))*(x--)+(-(y--))%(++z);
	cout <<"2. "<< result[2] << endl;

	result[3] *= ((-(++x))*(x--))+((-(y--))%(++z));
	cout <<"3. "<< result[3] << endl;
}


int main(int argc, char *argv[]) {
	A();

	return 0;
}
