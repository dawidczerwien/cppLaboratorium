#include <iostream>
#include <cmath>

using namespace std;

int BinToDec(int n) {
	int i = 0;
	int reminder = 0;
	int decimal = 0;

	while (n!=0) {
		reminder = n%10;
		n /= 10;
		decimal += reminder*pow(2, i);
		i++;
	}
	return decimal;
}


int main(int argc, char *argv[]) {
	cout << BinToDec(101010) << endl;

	return 0;
}
