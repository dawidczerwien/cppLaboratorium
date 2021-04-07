#include <iostream>
using namespace std;

void funkcjaA(int x) {
	// 1 & liczba parzysta zwraca 0
	// 1 & liczba nie parzysta zwraca 1
	// Przykład dla liczby 7
	// 1 & 111 zwraca 1
	// Przykład dla liczbt 8
	// 1 & 1000 zwraca 0
        if(x & 1) cout <<"Liczba nieparzysta."<< endl;
        else cout <<"Liczba parzysta."<< endl;
}

void funkcjaB(int x) {
	if(x % 2 == 1) cout <<"Liczba nieparzysta."<< endl;
	else cout <<"Liczba parzysta."<< endl;
}

void funkcjaC(int x) {
        cout << ((x % 2 == 1) ? "Liczba nieparzysta." : "Liczba parzysta.")<< endl;
}

int main()
{
	int x;
	cout << "Podaj liczba calkowita: ";
	cin >> x;
	cout << "Wynik funkcji A: " << endl;
	funkcjaA(x);

	cout << "Wynik funkcji B: " << endl;
        funkcjaB(x);

	cout << "Wynik funkcji C: " << endl;
        funkcjaC(x);
	return 0;
}
