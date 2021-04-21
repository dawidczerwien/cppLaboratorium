#include <iostream>
using namespace std;

int main() {
	enum imiona{Kasia, Ola, Zosia};
	imiona i = Ola;

	switch(i){
	case Kasia:
		cout << "Hello Kasia" << endl;
		break;
	case Ola:
		cout << "Hello Ola" << endl;
		break;
	case Zosia:
		cout << "Hello Zosia" << endl;
		break;
	}


	return 0;
}
