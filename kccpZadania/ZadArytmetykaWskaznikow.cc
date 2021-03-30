#include <iostream>
using namespace std;

void funkcja1() {
	int a=11, b=22, c=33, d=44, e=55, f=66, g=77, h=88, *p, *q;

	p = &a;
	cout << "Funkcja 1 -------------------------------------" << endl;
	//post inkrementacja adresu
        cout << "p++    = " << *p <<", ref: " << p++ << ", val aftef: "<< *p <<  endl;

        //pre inkrementacja adresu
        cout << "++p    = " << *p <<", ref: " << ++p << ", val aftef: "<< *p << endl;

        //pre inkrementacja wartości w tablicy pod wskaźnikiem
        cout << "++*p   = " << ++*p << ", ref: " << p << ", val aftef: "<< *p << endl;

        //to samo co wyżej
        cout << "++(*p) = " << ++(*p) << ", ref: " << p << ", val after: " << *p << endl;

        //to samo co wyżej
        cout << "++*(p) = " << ++*(p)  << ", ref: " << p << ", val after: " << *p << endl;

        //post inkrementacja adresu
        cout << "*p++   = " << *p++ << ", ref: " << p << ", val after: " << *p << endl;

	//post inkrementacja wartości w tablicy pod wskaźnikiem
	cout << "(*p)++ = " << (*p)++ << ", ref: " << p << ", val after: " << *p << endl;

	//pre inkrementacja wartości w tablicy pod wskaźnikiem
	cout << "++*(p) = " << ++*(p) << ", ref: " << p << ", val after: " << *p << endl;

        //pre inkrementacja adresu
	cout << "*++p   = " << *++p << ", ref: " << p << ", val after: " << *p << endl;

	//pre inkrementacja adresu
	cout << "*(++p) = " << *(++p) << ", ref: " << p << ", val after: " << *p << endl;
}
void funkcja2() {
int tab[] = {11,22,33,44,55,66,77,88}, i = 3, *p, *q;

	p = &tab[0];
	cout << "Funkcja 2 -------------------------------------" << endl;
	//wskazuje na pierwszy element w tablicy
	cout << "*p     = " << *p << ", ref: " << p << endl;

	//post inkrementacja adresu
	cout << "p++    = " << *p <<", ref: " << p++ << ", val aftef: "<< *p <<  endl;

	//pre inkrementacja adresu
	cout << "++p    = " << *p <<", ref: " << ++p << ", val aftef: "<< *p << endl;

	//pre inkrementacja wartości w tablicy pod wskaźnikiem
	cout << "++*p   = " << ++*p << ", ref: " << p << ", val aftef: "<< *p << endl;

	//to samo co wyżej
	cout << "++(*p) = " << ++(*p) << ", ref: " << p << ", val after: " << *p << endl;

	//to samo co wyżej
	cout << "++*(p) = " << ++*(p)  << ", ref: " << p << ", val after: " << *p << endl;

	//post inkrementacja adresu
	cout << "*p++   = " << *p++ << ", ref: " << p << ", val after: " << *p << endl;

	//post inkrementacja wartości w tablicy pod wskaźnikiem
	cout << "(*p)++ = " << (*p)++ << ", ref: " << p << ", val after: " << *p << endl;

	//pre inkrementacja wartości w tablicy pod wskaźnikiem
	cout << "++*(p) = " << ++*(p) << ", ref: " << p << ", val after: " << *p << endl;

	//pre inkrementacja adresu
	cout << "*++p   = " << *++p << ", ref: " << p << ", val after: " << *p << endl;

	//pre inkrementacja adresu
	cout << "*(++p) = " << *(++p) << ", ref: " << p << ", val after: " << *p << endl;
}

void funkcja3() {
	int a, b, c;
	float x;
	int *wsk_int;
	cout << "Funkcja 3 -------------------------------------" << endl;
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
int main() {
	funkcja1();

	funkcja2();

	funkcja3();

}
