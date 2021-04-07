#include <iostream>
using namespace std;

void funkcjaA(int x) {
        if(x & 1) cout <<"Liczba nieparzysta."<< endl;
        else cout <<"Liczba parzysta."<< endl;
}

void funkcjaB(int x) {
	if(x % 2 == 1) cout <<"Liczba nieparzysta."<< endl;
	else cout <<"Liczba parzysta."<< endl;
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
	return 0;
}
