#include <iostream>
#define sprawdz(x) ( ((x) % 2 == 0) ? " parzysta" : " nieparzysta" )
#define x 33
#define time __TIME__
#define file __FILE__
#define line __LINE__
#define concat(a,b) int a##b


using namespace std;

int main()
{
	cout << "Przykład użycia makra z dyrektywy preprocesora:" << endl;
	for (int i = 3; i<10;i++) {
		cout << i << sprawdz(i) << endl;
	}
	cout << x << sprawdz(x) << endl;
	cout << "#define __TIME__: "<< time << endl;
	cout << "#define __FILE__: " << file << endl;
	cout << "#define __LINE__: " << line << endl;

	#ifndef y
	cout << "y not defined" << endl;
	#define y 2
	#endif

	#ifdef x
	cout << "x was defined" << endl;
	#endif

	#if defined(x) && defined (y)
	cout << "x*y= "<< x*y << endl;
	#else
	cout << "not defined variables" << endl;
	#endif

	concat(my, var);
	myvar=10;
	cout << myvar << endl;

	return 0;
}
