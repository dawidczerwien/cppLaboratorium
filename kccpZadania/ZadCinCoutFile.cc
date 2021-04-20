#include<iostream>
#include<fstream>
using namespace std;


int main() {
	// wypisywanie na ekran
	cout << "cout output"<< endl;
	// ./a.out 2>error.txt - zapisanie błedu do pliku
	cerr << "Strumień błędów"<< endl;
	// zapis do pliku
	ofstream zapisz("tekst.txt");
	zapisz << "Tekst w pliku" << endl;
	zapisz.close();
	// odczyt z pliku
	ifstream czytaj("tekst.txt");
	string a, b, c;
	czytaj>>a>>b>>c;
	cout << a << " " << b << " " << c << endl;
	czytaj.close();
	return 0;
}
