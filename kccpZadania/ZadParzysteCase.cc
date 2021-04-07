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
	int n;
	cout << "0 - Wybierz funkcje z modulo, 1 - funkcja z operatorem AND, 2 - funkcja z operatorem warukowym: ";
	cin >> n;
	int x;
	switch (n) {
	case 0:
		cout << "Wybrano funkję z modulo" << endl;
        	cout << "Podaj liczba calkowita: ";
        	cin >> x;
		funkcjaB(x);
		break;
	case 1:
                cout << "Wybrano funkję z operatorem AND" << endl;
                cout << "Podaj liczba calkowita: ";
                cin >> x;
                funkcjaA(x);
                break;
	case 2:
                cout << "Wybrano funkję z operatorem warunkowy" << endl;
                cout << "Podaj liczba calkowita: ";
                cin >> x;
                funkcjaC(x);
                break;
	default:
		cout << "Poza zakresem" << endl;
	}
	return 0;
}
