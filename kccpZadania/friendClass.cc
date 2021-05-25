#include <iostream>

using namespace std;
// krok 1 deklaracja klasy B
class B;
class A {
private:
    int a;

public:
    A() { a = 0; }
    // krok 2 deklaracja funkcji
    void showB(B& x);
    friend class B;
};

class B {
private:
    int b;

public:
	B() { b = 1; }
    void showA(A& x)
    {
        cout << "A::a=" << x.a << endl;
    }
	friend class A;
};
// krok 3 definicja funkcji
void A::showB(B& x){
	cout << "B::b=" << x.b << endl;
};
int main()
{
    A a;
    B b;
    b.showA(a);
    a.showB(b);
    return 0;
}
