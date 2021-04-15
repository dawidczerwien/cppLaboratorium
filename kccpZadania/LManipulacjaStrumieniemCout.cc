#include<iostream>
#include<iomanip>
using namespace std;



int main() {
	double x = 11;
	double y = 7;
	double k = x/y;
	cout << k << endl;
	// setw - ustawia szerokość słowa
	// left/right - wyrównywanie słowa do lewej lub prawej "word    "
	// setfill('') - wypełniamy wolne miejsca w słowie
	cout << setw(8) << left << setfill(' ') << "output:" << setprecision(4)
		<< setw(6) << setfill('0')<< right << k
		<< setw(6) << setfill(' ') << "T:"
		<< setprecision(4) << setw(7) << setfill(' ') << k << endl;

	cout << setw(9) << left << setfill(' ') << "output1:"<< setprecision(5)
		<< setw(6) << k
		<< setw(6) << right << "T: "
		<< setprecision(7) << setw(9) << setfill('0')<< k << endl;

	cout << setw(9) << left << setfill(' ') << "output1:"<< setprecision(5)
        	<< setw(6) << k
		<< setw(6) << right << "T: "
		<< setprecision(8) << setw(10) << setfill('0')<< k << endl;
	return 0;
}
