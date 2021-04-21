#include <iostream>
#include "LDyrektywaIncludeA.h"
#include <LDyrektywaIncludeB.h>
#define sprawdz(x) ( ((x) % 2 == 0) ? " parzysta" : " nieparzysta" )
#define x 33
#define time __TIME__
#define file __FILE__
#define line __LINE__

using namespace std;

int main()
{
	WywolywanaFunkcjaA();
	WywolywanaFunkcjaB();

	for (int i = 3; i<10;i++) {
		cout << i << sprawdz(i) << endl;
	}
	cout << x << sprawdz(x) << endl;
	cout << time << endl;
	cout << file << endl;
	cout << line << endl;

	#ifndef y
	cout << "y not defined" << endl;
	//#define y 2
	#endif

	#ifdef x
	cout << "x was defined" << endl;
	#endif

	#if defined(x) && defined (y)
	cout << "x*y= "<< x*y << endl;
	#else
	cout << "not defined variables" << endl;
	#endif


	return 0;
}
