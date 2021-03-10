
#include <iostream>
#include <cstring>
using namespace std;

int main(){

	char mystring1[] = "abcdefgh";
	char mystring2[] = "aaabbcd";
	int i;
	/*funkcja strspn zwraca index pierwszego znaku należącego do mystring2
	który nie występuje w łańcuchu znaków str2 */
	i = strspn(mystring1, mystring2);
	cout << i << endl;
	/*strpbrk*/
	char str3[] = "Ala ma kota";
	char str4[] = "m";
	char * str5 = strpbrk(str3,str4);
	cout << str5 << endl;

  /* Prosze sprawdzic co robi sizeof
  int iTab[10];
  double dTab[10];

  cout <<"iTab: "<< sizeof(iTab) << endl;
  cout <<"dTab: "<< sizeof(dTab) << endl;
 */

	/*from cstring
  https://www.programiz.com/cpp-programming/library-function/cstring/strlen
  strxfrm()
  strcoll()
  strlen()
  strerror()
  memset()
  strtok()
  strstr()
  strspn()
  strrchr()
  strpbrk()
  strcspn()
*/

	return 0;
}
