#include <iostream>
#include <string>
#include <ctime>

using namespace std;

void A() {
	cout << "Hello!" << endl;
}

void B() {
	cout << "world!" << endl;
}

void C() {
	time_t t = time(0);
	char* dt = ctime(&t);

	cout << "time: " << dt << endl;
}

extern "C" void D(){
	printf("Print C code from inside C++ file \n");
}

extern "C" void E();

int main(int argc, char *argv[]) {
	for (int i = 1; i<argc; i++) {
		string c = argv[i];
		if (c == "A") { A();}
		else if (c == "B"){B();}
		else if (c == "C"){C();}
		else if (c == "D"){D();}
		else if (c == "E"){E();}
	}
	return 0;
}
