#include <iostream>
using namespace std;

int main() {
	int tab[] = {11,22,33,44,55,66,77,88,99}, i = 3, *p, *q;

        p = &tab[0];
        cout << "*p        = " << *p << endl;

	p++;
        cout << "p++       = " << *p << endl;

	++p;
        cout << "++p       = " << *p << endl;

	++*p;
        cout << "++*p      = " << *p << endl;

	++(*p);
        cout << "++(*p)    = " << *p << endl;

	++*(p);
        cout << "++*(p)    = " << *p << endl;

        *p++;
        cout << "*p++      = " << *p << endl;

	(*p)++;
	cout << "*(p)++    = " << *p << endl;

	*(p)++;
        cout << "*(p)++    = " << *p << endl;

	*++p;
        cout << "*++p      = " << *p << endl;

	*(++p);
        cout << "*(++p)    = " << *p << endl;
}
