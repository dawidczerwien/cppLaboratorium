#include <iostream>

using namespace std;

void A() {
	cout << "Funkcja A" << endl;
}

void B() {
	cout << "Funkcja B" << endl;
}

int main(int argc, char *argv[]) {
	int input = 0;

	while ((input != 1) && (input !=2)) {
	cout << "Wybierz funkcje A() - wpisując 1, lub funkcje B() wpisując 2" << endl;
	cin >> input;
	}
	if (input == 1) {
		A();
	} else B();

	return 0;
}
