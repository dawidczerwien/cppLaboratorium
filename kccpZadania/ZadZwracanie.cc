#include<iostream>
using namespace std;

//global variable
int r;

int dodaj(int a, int b) { //Przekazywanie przez wskaznik
	return a+b;
}

int& setR() {
        return r;
}

int* fun(int value) {
	//new jest operatorem dynamicznej alokacji pamięci. Zwraca adres lokalizacji pamięci,
	//której możemy od teraz używać do przechowywania wartości do końca działania programu
	int* newValue = new int;
	*newValue = value;
	return newValue;
}

int* function(int table[], int size) {
	//tablica sama jest wskaźnikiem
	for (int i=0; i<4;i++) {
                table[i] += 1;
        }
	return table;
}

int main() {

	int A = 4;
	int B = 6;

	cout <<"Przed: A = "<< A <<" B = "<< B << endl;
	//funkcja pierwsza zwracająca wartość
	A = dodaj(A, B);
	cout <<"A + B = "<< A << endl;

	//funkcja druga zwracająca adres
	setR() = 14;
	cout << "promien = " << r << endl;

	//fun zwraca wskaźnik więc musimy zapisać do wskaźnika
	int *nv = fun(B);
	cout << "Nowa wartosc = " << *nv << endl;

	//tablica
	int size = 4;
	int t[size] = {0,1,2,3};
	function(t, size);
	for (int i=0; i<4;i++) {
		cout << t[i] << ", ";
	}
	return 0;
}
