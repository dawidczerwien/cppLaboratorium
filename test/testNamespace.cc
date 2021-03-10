#include <iostream>
using namespace std;

namespace nasza {
	int dodajAB(int a, int b){
		return a+b;
	}
	int k = 7;
}
using namespace nasza;

int main(){
	//std::cout << "Test" << std::endl;
	cout << "Test" << endl;
	int k = 10;
  cout << nasza::dodajAB(k, nasza::k) << endl;
  cout << k << endl;


	return 0;
}
