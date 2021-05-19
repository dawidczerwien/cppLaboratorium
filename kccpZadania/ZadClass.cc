#include <iostream>
using namespace std;

class Konto {
	private:
	// dostępne tylko w klasie
         double saldo = 0;

	 Konto(double x) {saldo = x;}

	protected:
	// dostępne tylko w klasnie i w klasie dziedziczącej
	string imie;

	public:
	Konto(){};
	Konto(string s) { imie = s;};

	void depozyt(double x){
		saldo = x;
	};
	// deklaruje i definiuje
	double getSaldo(){
		return saldo;
	};

	string getImie();

	inline int getNumer(){
		return 12345;
	}
};
// definuje metodę na zewnątrz
string Konto::getImie() {
	return imie;
};

int main(){
	Konto a1("dawid");
	a1.depozyt(10);
	cout << a1.getSaldo() << endl;
	cout << a1.getImie() << endl;
	cout << a1.getNumer() << endl;
	return 0;
}
