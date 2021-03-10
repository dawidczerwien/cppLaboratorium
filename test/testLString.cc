#include <iostream>
#include <string>
using namespace std;

int main(){

	//https://pl.wikibooks.org/wiki/C%2B%2B/String

	string napis1;
	napis1 = "Wiem że ";

	//inicjalizowanie łańcucha znaków w miejscu jego tworzenia
	string napis2("nic nie wiem");

	string napis3 = napis1+napis2;

	cout <<"napis1: "<< napis1 << endl
		   <<"napis2: "<< napis2 << endl
		   <<"napis3: "<< napis3 << endl;




	return 0;
}
