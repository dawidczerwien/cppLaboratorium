#include<iostream>
using namespace std;


void swapWsk(int *a, int *b) { //Przekazywanie przez wskaznik
	cout <<"\n---> Przez wskaznik:"<< endl;
	int temp = *a;
	*a = *b;
	*b = temp;
}


int main() {

	int A = 4;
	int B = 6;

	cout <<"Przed: A = "<< A <<" B = "<< B << endl;

 	//--- przez wskaznik ----------------------
	int *wskA = &A;
	int *wskB = &B;

	swapWsk(wskA, wskB);
	cout <<"Po:    A = "<< A <<" B = "<< B << endl;

	return 0;
}
