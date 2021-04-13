#include <iostream>
using namespace std;

void funkcjaWhile(){
	//Funkcja while działa tak długo jak spełnioty jest warunek
	cout << "Funkcja while z ++x" << endl;
	int x = 0;
	while(x<5) {
		// inkrementacja wartości przed wypisaniem
		cout << ++x << endl;
	}
	cout << "Funkcja while z x++" << endl;
	x=0;
	while(x<5) {
		// inkrementacja wartości po wypisaniu
		cout << x++ << endl;
	}

}

void funkcjaDoWhile() {
	// funkcja do while
	int x = 10;
	cout << "do while(x<5), cout ++x" << endl;
	do {
	cout << ++x << endl;
	}
	while(x<5);

	x = 10;

	cout << "do while(x<5), cout x++" << endl;
	do {
	cout << x++ << endl;
        }
        while(x<5);
}

void funkcjaFor() {
	cout << "Petla for odliczanie, użycie break if(i<0) break" << endl;
	for (int i=5; i>-10; i--) {
		if(i<0) break;
		cout << i << endl;
	}
	cout << "break" << endl;

	cout << "Petla for liczby parzyste, użycie if(i&1) continue" << endl;
	for (int i=0; i<=10;i++){
		if(i&1) continue;
		cout << i << endl;
	}

	cout << "Petla for, użycie if(i==13) return" << endl;
	for (int i=10; i<30; i++) {
		cout << i << endl;
		if (i==13) return;
	}
}

int main()
{
	funkcjaFor();
	return 0;

}
