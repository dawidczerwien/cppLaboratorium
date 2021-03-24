#include <iostream>
using namespace std;

// The array is passed as a reference to the function, keeping the size information
template<typename T, size_t N>
void function(T (&a)[N]) {
	int arrSize = sizeof(a)/sizeof(a[0]);
  	cout << "The size of the array in function is: " << arrSize << endl;
}
int main() {
  int arr[] = {10,20,30,40,50,60};
  int arrSize = sizeof(arr)/sizeof(arr[0]);
  cout << "The size of the array is: " << arrSize << endl;

  function(arr);
  return 0;
}
