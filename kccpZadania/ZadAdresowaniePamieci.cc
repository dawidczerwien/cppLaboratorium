#include <iostream>
using namespace std;

int main() {
        int a;
        int b;
        int c;

	//adresowanie pamieci
        unsigned long p = (unsigned long) &a;
        cout <<"Adres zmiennej A: "<< &a << "\t dec: " << p  << endl;

	p = (unsigned long) &b;
	cout <<"Adres zmiennej B: "<< &b << "\t dec: " << p  << endl;

	p = (unsigned long) &c;
        cout <<"Adres zmiennej C: "<< &c << "\t dec: " << p  << endl;
}
