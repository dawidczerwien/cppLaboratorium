#include <iostream>

using namespace std;

int DecToBin(int n) {
	int i = 1;
	int reminder = 0;
	int binary = 0;

	while (n!=0) {
		reminder = n%2;
		n /= 2;
		binary += reminder*i;
		i*=10;
	}
	return binary;
}


int main(int argc, char *argv[]) {
	cout << DecToBin(15) << endl;

	return 0;
}
