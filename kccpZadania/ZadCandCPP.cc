#include<iostream>

using namespace std;


int main() {
	// wypisywanie na ekran
	cout << "C++ output"<< endl;
	printf("C output\n");

	// c++
	char znak = 'a';
	cout << znak << endl;


	// c
	char znak2 = 'a';
	printf("%c\n", znak2);

	// input c++
	int x;
	cout << "Podaj liczbe całkowitą: ";
	cin >> znak;

	// input c
	int y;
	printf("Podaj liczba całowitą: ");
	scanf("%d", &y);



	return 0;
}
