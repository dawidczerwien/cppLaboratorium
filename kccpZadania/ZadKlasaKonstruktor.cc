#include <iostream>
using namespace std;

class Produkt
{
 private:
	int waga;
        string nazwa;
 public:
	Produkt(){ liczbaProduktow++; };
	~Produkt(){
		cout << this->nazwa << " deleted" <<endl;
		liczbaProduktow--;
	}
	Produkt(string name, int w) {
	 waga = w;
	 nazwa = name;
	 liczbaProduktow++;
	};

	Produkt(string str): nazwa(str) { liczbaProduktow++; };

	int getWaga(){
	 return this->waga;
	};
	string getNazwa(){
	 return this->nazwa;
	}
	static int liczbaProduktow;
};
int Produkt::liczbaProduktow = 0;
int main()
{
	Produkt *obiektN = new Produkt("Apple", 1000);
	cout << obiektN->getNazwa() << endl;
	delete obiektN;

	Produkt *obiektM = new Produkt();

	Produkt *obiektP = new Produkt("Banana");
        cout << obiektP->getNazwa() << endl;

	cout << Produkt::liczbaProduktow << endl;

}
