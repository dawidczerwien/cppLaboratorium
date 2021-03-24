#include <iostream>
using namespace std;

int main() {
	int tab[] = {11,22,33,44,55,66,77,88,99}, i = 3, *p, *q;
	//funkcja 1
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

	//funkcja 2
	int a, b, c;
	float x;
	int *wsk_int;
	a = b = c = 0;

	cout <<"1. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;

	b = 10;
	cout <<"2. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;

	wsk_int = &b;
	*(++wsk_int) = 20;
	cout <<"3. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;

	wsk_int = &a;
	*(wsk_int+1) = 30;
	cout <<"4. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;

        *(&a) = 40;
        cout <<"5. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;

        *(&c - 1) = 50;
        cout <<"6. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;

        *( (int*)&x - 1) = 60;
        cout <<"7. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;

        *(int*)( &x - 2) = 70;
        cout <<"8. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;

        *((int*)(wsk_int)) = 80;
        cout <<"9. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;

        *(int*) (wsk_int + 1) = 90;
        cout <<"10. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;
}
