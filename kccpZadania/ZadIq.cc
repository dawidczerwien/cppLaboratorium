#include <iostream>
using namespace std;

int main() {
	int tab[] = {11,22,33,44,55}, i = 3, *p, *q;

	p = &tab[0] + i;
	cout << "*p     = " << *p << endl;

	q = tab;
	cout << "i[q]   = " << i[q] << endl;   //   <-- Proszę to wyjaśnić
	// i[q] jest równe *(i + q) czyli inkrementujemy adres
	cout << "3[tab] = " << 3[tab] << endl; //drugi przykład


	return 0;
}
