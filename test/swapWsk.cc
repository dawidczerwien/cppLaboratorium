#include<iostream>
using namespace std;



int main() {
	int k = 0;
	cout << "k = k + 1" << endl;
	for (int i=0; i<1'000'000'000; i++) {
		k = k + 1;
	}
	return 0;
}
