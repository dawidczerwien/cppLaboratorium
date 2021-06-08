#include "ZadKcpp.h"
#include <iostream>
#include <ctime>
#include <cmath>
#include <iomanip>
#include <fstream>
#define sprawdz(x) (((x) % 2 == 0) ? " parzysta" : " nieparzysta")
#define xx 33
#define timed __TIME__
#define file __FILE__
#define line __LINE__
#define concat(a, b) int a##b

using namespace std;

ZadKcpp::ZadKcpp()
{
    this->run = true;
    this->menuId;
    this->subMenuId;
}

void ZadKcpp::renderMenu()
{
    cout << endl
         << "____________Main menu___________" << endl;
    cout << "choose from menu using (1-0) keys" << endl;
    cout << "1 - Zadania 1.x Funkcja main" << endl;
    cout << "2 - Zadania 2.x Zwracanie przez funkcje" << endl;
    cout << "3 - Zadania 3.x Arytmetyka wskaznikow" << endl;
    cout << "4 - Zadania 4.x Operacje wejscia/wyjscia" << endl;
    cout << "5 - Zadania 5.x Klasy" << endl;

    cout << "0 - Exit" << endl;
    cin >> this->menuId;
    cout << "You have choosen: " << this->menuId << endl;
    if (this->menuId == 0)
    {
        this->run = false;
    }
    else
    {
        renderSubMenu(this->menuId);
    }
}

void ZadKcpp::renderSubMenu(int id)
{
    switch (id)
    {
    case 1:
        cout << endl
             << "_______Zadania 1.x Funkcja main______" << endl;
        cout << "1 - Zadanie 1.1 funckja zawiera 5 innychfunkcji,z czego dwie zadeklarowane jako: extern 'C' " << endl;
        cout << "0 - to go back" << endl;
        cin >> this->functionId;
        if (this->functionId == 1)
        {
            this->zadanie1_1();
        }
        else if (this->functionId == 0)
        {
            this->renderMenu();
        }

        renderSubMenu(this->menuId);
        break;
    case 2:
        cout << endl
             << "____________Zadania 2.x Zwracanie przez funkcje___________" << endl;
        cout << "choose from menu using (1-0)keys" << endl;
        cout << "1 - Zadanie 2.1 Program z czterema funkcjami z ktorych kazda zwraca inaczej: (Przez wartosc, Przez referencje, Przez wskaznik) " << endl;
        cout << "2 - Zadanie 2.2 Program przekazujacy tablice z zachowaniem rozmiaru" << endl;
        cout << "0 - to go back" << endl;

        cin >> this->functionId;
        cout << "You have choosen: " << this->functionId << endl;
        switch (this->functionId)
        {
        case 1:
            this->zadanie2_1();
            renderSubMenu(this->menuId);
            break;
        case 2:
            this->zadanie2_2();
            renderSubMenu(this->menuId);
            break;
        case 0:
            this->renderMenu();
            break;
        default:
            renderSubMenu(this->menuId);
            break;
        }
        break;
    case 3:
        cout << endl
             << "____________Zadania 3.x Arytmetyka wskaznikow___________" << endl;
        cout << "choose from menu using (1-0)keys" << endl;
        cout << "1 - Zadanie 3.1 Kierunek adresowania pamieci" << endl;
        cout << "2 - Zadanie 3.2 Wyjasnic i[q] gdy i jest 'int', a q jest wskaznikiem na tablice" << endl;
        cout << "3 - Zadanie 3.3 Co robia ponizsze operacje? Napisac program ktory pokazuje ich dzialanie p++, ++*p itp." << endl;
        cout << "4 - Zadanie 3.4 Zaproponuj inne dwa sposoby wyboru wywolania funkcji" << endl;
        cout << "5 - Zadanie 3.5 LOperatoryPrzypisania.cc" << endl;
        cout << "6 - Zadanie 3.6 Priorytety operatorow" << endl;
        cout << "7 - Zadanie 3.7 Dec2Bin" << endl;
        cout << "8 - Zadanie 3.7 Bin2Dec" << endl;
        cout << "0 - to go back" << endl;

        cin >> this->functionId;
        cout << "You have choosen: " << this->functionId << endl;
        switch (this->functionId)
        {
        case 1:
            this->zadanie3_1();
            renderSubMenu(this->menuId);
            break;
        case 2:
            this->zadanie3_2();
            renderSubMenu(this->menuId);
            break;
        case 3:
            this->zadanie3_3();
            renderSubMenu(this->menuId);
            break;
        case 4:
            this->zadanie3_4();
            renderSubMenu(this->menuId);
            break;
        case 5:
            this->zadanie3_5();
            renderSubMenu(this->menuId);
            break;
        case 6:
            this->zadanie3_6();
            renderSubMenu(this->menuId);
            break;
        case 7:
            this->zadanie3_7_Dec2Bin();
            renderSubMenu(this->menuId);
            break;
        case 8:
            this->zadanie3_7_Bin2Dec();
            renderSubMenu(this->menuId);
            break;
        case 0:
            this->renderMenu();
            break;
        default:
            renderSubMenu(this->menuId);
            break;
        }
        break;
    case 4:
        cout << endl
             << "____________Zadania 4.x Operacje wejscia/wyjscia___________" << endl;
        cout << "choose from menu using (1-0)keys" << endl;
        cout << "1 - Zadanie 4.0 Program z przykladami manipulacji strumieniem cout" << endl;
        cout << "2 - Zadanie 4.1 Operacje na plikach" << endl;
        cout << "3 - Zadanie 4.2 program pokazujacy wykonanie tych samych operacji w c i c++" << endl;
        cout << "4 - Zadanie 4.3 program sprawdzajacy czy liczba jest parzysta/nieparzysta" << endl;
        cout << "5 - Zadanie 4.4 program z użyciem 'switch'" << endl;
        cout << "6 - Zadanie 4.5 program pokazujacy dzialanie instrukcji inkrementacji dekrementacji" << endl;
        cout << "7 - Zadanie 4.6 program wykorzystujacy instrukcje 'switch" << endl;
        cout << "8 - Zadanie 4.7 program pokazujacy zstosowanie dyrektywy preprocesora" << endl;
        cout << "0 - to go back" << endl;

        cin >> this->functionId;
        cout << "You have choosen: " << this->functionId << endl;
        switch (this->functionId)
        {
        case 1:
            this->zadanie4_0();
            renderSubMenu(this->menuId);
            break;
        case 2:
            this->zadanie4_1();
            renderSubMenu(this->menuId);
            break;
        case 3:
            this->zadanie4_2();
            renderSubMenu(this->menuId);
            break;
        case 4:
            this->zadanie4_3();
            renderSubMenu(this->menuId);
            break;
        case 5:
            this->zadanie4_4();
            renderSubMenu(this->menuId);
            break;
        case 6:
            this->zadanie4_5();
            renderSubMenu(this->menuId);
            break;
        case 7:
            this->zadanie4_6();
            renderSubMenu(this->menuId);
            break;
        case 8:
            this->zadanie4_7();
            renderSubMenu(this->menuId);
            break;
        case 0:
            this->renderMenu();
            break;
        default:
            renderSubMenu(this->menuId);
            break;
        }
        break;
    case 5:
        cout << endl
             << "____________Zadania 5.x Klasy___________" << endl;
        cout << "choose from menu using (1-0)keys" << endl;
        cout << "1 - Zadanie 5.1 Napisz prosty program z klasA" << endl;
        cout << "2 - Zadanie 5.2 Stworz plik z działajaca struktura" << endl;
        cout << "3 - Zadanie 5.3 dzialanie uni" << endl;
        cout << "4 - Zadanie 5.4 Klasa z konstruktorem desktruktorem, inicjalizacja zmiennych" << endl;
        cout << "5 - Zadanie 5.5 dzialanie przyjazni klas" << endl;
        cout << "6 - Zadanie 5.6 Klasy abstrakcyjne" << endl;

        cout << "0 - to go back" << endl;

        cin >> this->functionId;
        cout << "You have choosen: " << this->functionId << endl;
        switch (this->functionId)
        {
        case 1:
            this->zadanie5_1();
            renderSubMenu(this->menuId);
            break;
        case 2:
            this->zadanie5_2();
            renderSubMenu(this->menuId);
            break;
        case 3:
            this->zadanie5_3();
            renderSubMenu(this->menuId);
            break;
        case 4:
            this->zadanie5_4();
            renderSubMenu(this->menuId);
            break;
        case 5:
            this->zadanie5_5();
            renderSubMenu(this->menuId);
            break;
        case 6:
            this->zadanie5_6();
            renderSubMenu(this->menuId);
            break;
        case 0:
            this->renderMenu();
            break;
        default:
            renderSubMenu(this->menuId);
            break;
        }
        break;
    }
}

const bool ZadKcpp::isRunning() const
{
    return this->run;
}
// zadanie 1.1

void A()
{
    cout << "Hello!" << endl;
}

void B()
{
    cout << "world!" << endl;
}

void C()
{
    time_t t = time(0);
    char *dt = ctime(&t);

    cout << "time: " << dt << endl;
}

extern "C" void D()
{
    printf("Print C code from inside C++ file \n");
}

void ZadKcpp::zadanie1_1()
{
    string c;
    cout << "Zadanie 1.1 type A, B, C, od D to choose function" << endl;
    cin >> c;
    if (c == "A")
    {
        A();
    }
    else if (c == "B")
    {
        B();
    }
    else if (c == "C")
    {
        C();
    }
    else if (c == "D")
    {
        D();
    }
}
// zadanie 2.1

//global variable
int r;

int dodaj(int a, int b)
{ //Przekazywanie przez wskaznik
    return a + b;
}

int &setR()
{
    return r;
}

int *fun(int value)
{
    //new jest operatorem dynamicznej alokacji pamięci. Zwraca adres lokalizacji pamięci,
    //której możemy od teraz używać do przechowywania wartości do końca dzialania programu
    int *newValue = new int;
    *newValue = value;
    return newValue;
}

int *function(int table[], int size)
{
    //tablica sama jest wskaźnikiem
    for (int i = 0; i < 4; i++)
    {
        table[i] += 1;
    }
    return table;
}

void ZadKcpp::zadanie2_1()
{
    int A = 4;
    int B = 6;

    cout << "Przed: A = " << A << " B = " << B << endl;
    //funkcja pierwsza zwracajaca wartość
    A = dodaj(A, B);
    cout << "A + B = " << A << endl;

    //funkcja druga zwracajaca adres
    setR() = 14;
    cout << "promien = " << r << endl;

    //fun zwraca wskaźnik więc musimy zapisać do wskaźnika
    int *nv = fun(B);
    cout << "Nowa wartosc = " << *nv << endl;

    //tablica
    int size = 4;
    int t[size] = {0, 1, 2, 3};
    function(t, size);
    for (int i = 0; i < 4; i++)
    {
        cout << t[i] << ", ";
    }
}
// zadanie 2.2

// The array is passed as a reference to the function, keeping the size information
template <typename T, size_t N>
void function(T (&a)[N])
{
    int arrSize = sizeof(a) / sizeof(a[0]);
    cout << "The size of the array in function is: " << arrSize << endl;
}

void ZadKcpp::zadanie2_2()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    cout << "The size of the array is: " << arrSize << endl;

    function(arr);
}
// zadanie 3.1
void ZadKcpp::zadanie3_1()
{
    int a;
    int b;
    int c;

    //adresowanie pamieci
    unsigned long p = (unsigned long)&a;
    cout << "Adres zmiennej A: " << &a << "\t dec: " << p << endl;

    p = (unsigned long)&b;
    cout << "Adres zmiennej B: " << &b << "\t dec: " << p << endl;

    p = (unsigned long)&c;
    cout << "Adres zmiennej C: " << &c << "\t dec: " << p << endl;
};

// zadanie 3.2
void ZadKcpp::zadanie3_2()
{
    int tab[] = {11, 22, 33, 44, 55}, i = 3, *p, *q;

    p = &tab[0] + i;
    cout << "*p     = " << *p << endl;

    q = tab;
    cout << "i[q]   = " << i[q] << endl; //   <-- Proszę to wyjaśnić
    // i[q] jest równe *(i + q) czyli inkrementujemy adres
    cout << "3[tab] = " << 3 [tab] << endl; //drugi przyklad
};

// zadanie 3.3

void funkcja1()
{
    int a = 11, b = 22, c = 33, d = 44, e = 55, f = 66, g = 77, h = 88, *p, *q;

    p = &a;
    cout << "Funkcja 1 -------------------------------------" << endl;
    //post inkrementacja adresu
    cout << "p++    = " << *p << ", ref: " << p++ << ", val aftef: " << *p << endl;

    //pre inkrementacja adresu
    cout << "++p    = " << *p << ", ref: " << ++p << ", val aftef: " << *p << endl;

    //pre inkrementacja wartości w tablicy pod wskaźnikiem
    cout << "++*p   = " << ++*p << ", ref: " << p << ", val aftef: " << *p << endl;

    //to samo co wyżej
    cout << "++(*p) = " << ++(*p) << ", ref: " << p << ", val after: " << *p << endl;

    //to samo co wyżej
    cout << "++*(p) = " << ++*(p) << ", ref: " << p << ", val after: " << *p << endl;

    //post inkrementacja adresu
    cout << "*p++   = " << *p++ << ", ref: " << p << ", val after: " << *p << endl;

    //post inkrementacja wartości w tablicy pod wskaźnikiem
    cout << "(*p)++ = " << (*p)++ << ", ref: " << p << ", val after: " << *p << endl;

    //pre inkrementacja wartości w tablicy pod wskaźnikiem
    cout << "++*(p) = " << ++*(p) << ", ref: " << p << ", val after: " << *p << endl;

    //pre inkrementacja adresu
    cout << "*++p   = " << *++p << ", ref: " << p << ", val after: " << *p << endl;

    //pre inkrementacja adresu
    cout << "*(++p) = " << *(++p) << ", ref: " << p << ", val after: " << *p << endl;
}
void funkcja2()
{
    int tab[] = {11, 22, 33, 44, 55, 66, 77, 88}, i = 3, *p, *q;

    p = &tab[0];
    cout << "Funkcja 2 -------------------------------------" << endl;
    //wskazuje na pierwszy element w tablicy
    cout << "*p     = " << *p << ", ref: " << p << endl;

    //post inkrementacja adresu
    cout << "p++    = " << *p << ", ref: " << p++ << ", val aftef: " << *p << endl;

    //pre inkrementacja adresu
    cout << "++p    = " << *p << ", ref: " << ++p << ", val aftef: " << *p << endl;

    //pre inkrementacja wartości w tablicy pod wskaźnikiem
    cout << "++*p   = " << ++*p << ", ref: " << p << ", val aftef: " << *p << endl;

    //to samo co wyżej
    cout << "++(*p) = " << ++(*p) << ", ref: " << p << ", val after: " << *p << endl;

    //to samo co wyżej
    cout << "++*(p) = " << ++*(p) << ", ref: " << p << ", val after: " << *p << endl;

    //post inkrementacja adresu
    cout << "*p++   = " << *p++ << ", ref: " << p << ", val after: " << *p << endl;

    //post inkrementacja wartości w tablicy pod wskaźnikiem
    cout << "(*p)++ = " << (*p)++ << ", ref: " << p << ", val after: " << *p << endl;

    //pre inkrementacja wartości w tablicy pod wskaźnikiem
    cout << "++*(p) = " << ++*(p) << ", ref: " << p << ", val after: " << *p << endl;

    //pre inkrementacja adresu
    cout << "*++p   = " << *++p << ", ref: " << p << ", val after: " << *p << endl;

    //pre inkrementacja adresu
    cout << "*(++p) = " << *(++p) << ", ref: " << p << ", val after: " << *p << endl;
}

void funkcja3()
{
    int a, b, c;
    float x;
    int *wsk_int;
    cout << "Funkcja 3 -------------------------------------" << endl;
    a = b = c = 0;
    cout << "1. A, B, C: " << a << "\t" << b << "\t" << c << endl;

    b = 10;
    cout << "2. A, B, C: " << a << "\t" << b << "\t" << c << endl;
    wsk_int = &b;
    *(++wsk_int) = 20;
    cout << "3. A, B, C: " << a << "\t" << b << "\t" << c << endl;
    wsk_int = &a;
    *(wsk_int + 1) = 30;
    cout << "4. A, B, C: " << a << "\t" << b << "\t" << c << endl;

    *(&a) = 40;
    cout << "5. A, B, C: " << a << "\t" << b << "\t" << c << endl;

    *(&c - 1) = 50;
    cout << "6. A, B, C: " << a << "\t" << b << "\t" << c << endl;

    *((int *)&x - 1) = 60;
    cout << "7. A, B, C: " << a << "\t" << b << "\t" << c << endl;
    *(int *)(&x - 2) = 70;
    cout << "8. A, B, C: " << a << "\t" << b << "\t" << c << endl;
    *((int *)(wsk_int)) = 80;
    cout << "9. A, B, C: " << a << "\t" << b << "\t" << c << endl;
    *(int *)(wsk_int + 1) = 90;
    cout << "10. A, B, C: " << a << "\t" << b << "\t" << c << endl;
}
void ZadKcpp::zadanie3_3()
{
    int c;
    cout << "Wybierz funkcje:" << endl;
    cout << "1. Funkcja1(): Przy deklaracji zmiennych" << endl;
    cout << "2. Funkcja2(): Przy deklaracji tablicy" << endl;
    cout << "3. Funkcja3()" << endl;
    cin >> c;
    switch (c)
    {
    case 1:
        funkcja1();
        break;
    case 2:
        funkcja2();
        break;
    case 3:
        funkcja3();
        break;

    default:
        cout << "Zle dane" << endl;
        break;
    }
};

// zadanie 3.4

void AA()
{
    cout << "Funkcja A" << endl;
}

void BB()
{
    cout << "Funkcja B" << endl;
}

void ZadKcpp::zadanie3_4()
{
    int input = 0;

    while ((input != 1) && (input != 2))
    {
        cout << "Wybierz funkcje AA() - wpisujac 1, lub funkcje BB() wpisujac 2" << endl;
        cin >> input;
    }
    if (input == 1)
    {
        AA();
    }
    else
        BB();
};

// zadanie 3.5

void AAA()
{
    int x = 10;
    int y = 3;

    float result[10];
    result[0] = x * ++y;
    result[1] = 32 % 5 + 7 / 2;
    cout << "result[0] = " << result[0] << endl;
    cout << "result[1] = " << result[1] << endl;
}

void BBB()
{
    int x = 5;
    int y = 6;

    float result[10];
    result[0] = 3;
    result[0] *= 5;
    cout << "result[0] = " << result[0] << endl;
    result[1] = (int)result[0] % y;
    result[1] /= 2;
    cout << "result[1] = " << result[1] << endl;
}

void ZadKcpp::zadanie3_5()
{
    cout << "First method" << endl;
    AAA();
    cout << "Second method" << endl;
    BBB();
};

// zadanie 3.6
void ZadKcpp::zadanie3_6()
{
    int x = 1;
    int y = 2;
    int z = 3;
    int result[]{4, 4, 4, 4};

    result[0] *= -++x * x-- + -y-- % ++z;
    cout << "0. " << result[0] << endl;

    result[1] *= -(++x) * (x--) + -(y--) % (++z);
    cout << "1. " << result[1] << endl;

    result[2] *= (-(++x)) * (x--) + (-(y--)) % (++z);
    cout << "2. " << result[2] << endl;

    result[3] *= ((-(++x)) * (x--)) + ((-(y--)) % (++z));
    cout << "3. " << result[3] << endl;
};

// zadnie 3.7
void ZadKcpp::zadanie3_7_Dec2Bin()
{
    int n, n2;
    cout << "Podaj liczbe dziesienta: ";
    cin >> n;
    n2 = n;
    int i = 1;
    int reminder = 0;
    int binary = 0;

    while (n != 0)
    {
        reminder = n % 2;
        n /= 2;
        binary += reminder * i;
        i *= 10;
    }
    cout << n2 << " dziesietnie to binarnie: " << binary << endl;
};

// zadanie 3.7

void ZadKcpp::zadanie3_7_Bin2Dec()
{
    int n, n2;
    cout << "Podaj liczbe binarna: ";
    cin >> n;
    n2 = n;
    int i = 0;
    int reminder = 0;
    int decimal = 0;

    while (n != 0)
    {
        reminder = n % 10;
        n /= 10;
        decimal += reminder * pow(2, i);
        i++;
    }
    cout << n2 << " binarnie to dziesietnie: " << decimal << endl;
}

// zadnie 4.0

void ZadKcpp::zadanie4_0()
{
    double x = 11;
    double y = 7;
    double k = x / y;
    cout << k << endl;
    // setw - ustawia szerokość slowa
    // left/right - wyrównywanie slowa do lewej lub prawej "word    "
    // setfill('') - wypelniamy wolne miejsca w slowie
    cout << setw(8) << left << setfill(' ') << "output:" << setprecision(4)
         << setw(6) << setfill('0') << right << k
         << setw(6) << setfill(' ') << "T:"
         << setprecision(4) << setw(7) << setfill(' ') << k << endl;

    cout << setw(9) << left << setfill(' ') << "output1:" << setprecision(5)
         << setw(6) << k
         << setw(6) << right << "T: "
         << setprecision(7) << setw(9) << setfill('0') << k << endl;

    cout << setw(9) << left << setfill(' ') << "output1:" << setprecision(5)
         << setw(6) << k
         << setw(6) << right << "T: "
         << setprecision(8) << setw(10) << setfill('0') << k << endl;
}

// zadnie 4.1

void ZadKcpp::zadanie4_1()
{
    // wypisywanie na ekran
    cout << "cout output" << endl;
    // ./a.out 2>error.txt - zapisanie bledu do pliku
    cerr << "Strumień blędów" << endl;
    // zapis do pliku
    ofstream zapisz("tekst.txt");
    zapisz << "Tekst w pliku" << endl;
    zapisz.close();
    // odczyt z pliku
    ifstream czytaj("tekst.txt");
    string a, b, c;
    czytaj >> a >> b >> c;
    cout << a << " " << b << " " << c << endl;
    czytaj.close();
}

// zadnie 4.2

void ZadKcpp::zadanie4_2()
{
    // wypisywanie na ekran
    cout << "C++ output" << endl;
    printf("C output\n");

    // c++
    char znak = 'a';
    cout << znak << endl;

    // c
    char znak2 = 'a';
    printf("%c\n", znak2);

    // input c++
    int x;
    cout << "Podaj liczbe calkowita: ";
    cin >> znak;

    // input c
    int y;
    printf("Podaj liczba calowita: ");
    scanf("%d", &y);
}

// zadnie 4.3

void funkcjaA(int x)
{
    // 1 & liczba parzysta zwraca 0
    // 1 & liczba nie parzysta zwraca 1
    // Przyklad dla liczby 7
    // 1 & 111 zwraca 1
    // Przyklad dla liczbt 8
    // 1 & 1000 zwraca 0
    if (x & 1)
        cout << "Liczba nieparzysta." << endl;
    else
        cout << "Liczba parzysta." << endl;
}

void funkcjaB(int x)
{
    if (x % 2 == 1)
        cout << "Liczba nieparzysta." << endl;
    else
        cout << "Liczba parzysta." << endl;
}

void funkcjaC(int x)
{
    cout << ((x % 2 == 1) ? "Liczba nieparzysta." : "Liczba parzysta.") << endl;
}

void ZadKcpp::zadanie4_3()
{
    int x;
    cout << "Podaj liczba calkowita: ";
    cin >> x;
    cout << "Wynik funkcji A: " << endl;
    funkcjaA(x);

    cout << "Wynik funkcji B: " << endl;
    funkcjaB(x);

    cout << "Wynik funkcji C: " << endl;
    funkcjaC(x);
}

// zadnie 4.4
void funkcjaAA(int x)
{
    // 1 & liczba parzysta zwraca 0
    // 1 & liczba nie parzysta zwraca 1
    // Przyklad dla liczby 7
    // 1 & 111 zwraca 1
    // Przyklad dla liczbt 8
    // 1 & 1000 zwraca 0
    if (x & 1)
        cout << "Liczba nieparzysta." << endl;
    else
        cout << "Liczba parzysta." << endl;
}

void funkcjaBB(int x)
{
    if (x % 2 == 1)
        cout << "Liczba nieparzysta." << endl;
    else
        cout << "Liczba parzysta." << endl;
}

void funkcjaCC(int x)
{
    cout << ((x % 2 == 1) ? "Liczba nieparzysta." : "Liczba parzysta.") << endl;
}

void ZadKcpp::zadanie4_4()
{
    int n;
    cout << "0 - Wybierz funkcje z modulo, 1 - funkcja z operatorem AND, 2 - funkcja z operatorem warukowym: ";
    cin >> n;
    int x;
    switch (n)
    {
    case 0:
        cout << "Wybrano funkję z modulo" << endl;
        cout << "Podaj liczba calkowita: ";
        cin >> x;
        funkcjaBB(x);
        break;
    case 1:
        cout << "Wybrano funkję z operatorem AND" << endl;
        cout << "Podaj liczba calkowita: ";
        cin >> x;
        funkcjaAA(x);
        break;
    case 2:
        cout << "Wybrano funkję z operatorem warunkowy" << endl;
        cout << "Podaj liczba calkowita: ";
        cin >> x;
        funkcjaCC(x);
        break;
    default:
        cout << "Poza zakresem" << endl;
    }
}
// zadanie 4.5

void funkcjaWhile()
{
    //Funkcja while dziala tak dlugo jak spelnioty jest warunek
    cout << "Funkcja while z ++x" << endl;
    int x = 0;
    while (x < 5)
    {
        // inkrementacja wartości przed wypisaniem
        cout << ++x << endl;
    }
    cout << "Funkcja while z x++" << endl;
    x = 0;
    while (x < 5)
    {
        // inkrementacja wartości po wypisaniu
        cout << x++ << endl;
    }
}

void funkcjaDoWhile()
{
    // funkcja do while
    int x = 10;
    cout << "do while(x<5), cout ++x" << endl;
    do
    {
        cout << ++x << endl;
    } while (x < 5);

    x = 10;

    cout << "do while(x<5), cout x++" << endl;
    do
    {
        cout << x++ << endl;
    } while (x < 5);
}

void funkcjaFor()
{
    cout << "Petla for odliczanie, użycie break if(i<0) break" << endl;
    for (int i = 5; i > -10; i--)
    {
        if (i < 0)
            break;
        cout << i << endl;
    }
    cout << "break" << endl;

    cout << "Petla for liczby parzyste, użycie if(i&1) continue" << endl;
    for (int i = 0; i <= 10; i++)
    {
        if (i & 1)
            continue;
        cout << i << endl;
    }

    cout << "Petla for, użycie if(i==13) return" << endl;
    for (int i = 10; i < 30; i++)
    {
        cout << i << endl;
        if (i == 13)
            return;
    }
}

void ZadKcpp::zadanie4_5()
{
    cout << "petla while" << endl;
    funkcjaWhile();
    cout << "Petla do while" << endl;
    funkcjaDoWhile();
    cout << "Petla for" << endl;
    funkcjaFor();
}
// zadnie 4.6

void ZadKcpp::zadanie4_6()
{
    enum imiona
    {
        Kasia,
        Ola,
        Zosia
    };
    imiona i = Ola;

    switch (i)
    {
    case Kasia:
        cout << "Hello Kasia" << endl;
        break;
    case Ola:
        cout << "Hello Ola" << endl;
        break;
    case Zosia:
        cout << "Hello Zosia" << endl;
        break;
    }
}
void ZadKcpp::zadanie4_7()
{
    cout << "Przyklad użycia makra z dyrektywy preprocesora:" << endl;
    for (int i = 3; i < 10; i++)
    {
        cout << i << sprawdz(i) << endl;
    }
    cout << xx << sprawdz(xx) << endl;
    cout << "#define __TIME__: " << timed << endl;
    cout << "#define __FILE__: " << file << endl;
    cout << "#define __LINE__: " << line << endl;

#ifndef y
    cout << "y not defined" << endl;
#define y 2
#endif

#ifdef xx
    cout << "x was defined" << endl;
#endif

#if defined(x) && defined(y)
    cout << "x*y= " << x * y << endl;
#else
    cout << "not defined variables" << endl;
#endif

    concat(my, var);
    myvar = 10;
    cout << myvar << endl;
}

// zadnie 5.1

class Konto
{
private:
    // dostępne tylko w klasie
    double saldo = 0;

    Konto(double x) { saldo = x; }

protected:
    // dostępne tylko w klasnie i w klasie dziedziczącej
    string imie;

public:
    Konto(){};
    Konto(string s) { imie = s; };

    void depozyt(double x)
    {
        saldo = x;
    };
    // deklaruje i definiuje
    double getSaldo()
    {
        return saldo;
    };

    string getImie();

    inline int getNumer()
    {
        return 12345;
    }
};
// definuje metodę na zewnątrz
string Konto::getImie()
{
    return imie;
};

void ZadKcpp::zadanie5_1()
{
    Konto a1("dawid");
    a1.depozyt(10);
    cout << a1.getSaldo() << endl;
    cout << a1.getImie() << endl;
    cout << a1.getNumer() << endl;
}

// zadanie 5_2

struct product
{
    string name;
    int amount;
    double weight;
    float price;

    // można tworzyć konstruktory tak jak w klasie
    product()
    {
        amount = 0;
        weight = 0;
        price = 0;
    }
};

void ZadKcpp::zadanie5_2()
{
    struct product product1;
    product1.amount = 2;
    product1.name = "banana";
    product1.weight = 1.2;
    product1.price = 4.50;
    cout << product1.name << "{"
         << "amount: " << product1.amount << ", weight: " << product1.weight << ", price: " << product1.price << "}" << endl;

    struct product product2;
    cout << product2.amount << endl;
}

// zadanie 5_3

union elements
{
    int amount;
    double weight;
};

void ZadKcpp::zadanie5_3()
{
    elements e1;

    e1.amount = 12;
    cout << "e1.amount: " << e1.amount << endl;

    e1.weight = 33.44;
    cout << "e1.weight: " << e1.weight << endl;

    // e1.amount wypisze nam błędną wartość
    cout << "e1.amount: " << e1.amount << endl;
}

// zadanie 5_4

class Produkt
{
private:
    int waga;
    string nazwa;

public:
    Produkt() { liczbaProduktow++; };
    ~Produkt()
    {
        cout << this->nazwa << " deleted" << endl;
        liczbaProduktow--;
    }
    Produkt(string name, int w)
    {
        waga = w;
        nazwa = name;
        liczbaProduktow++;
    };

    Produkt(string str) : nazwa(str) { liczbaProduktow++; };

    int getWaga()
    {
        return this->waga;
    };
    string getNazwa()
    {
        return this->nazwa;
    }
    static int liczbaProduktow;
};
int Produkt::liczbaProduktow = 0;

void ZadKcpp::zadanie5_4()
{
    Produkt *obiektN = new Produkt("Apple", 1000);
    cout << obiektN->getNazwa() << endl;
    delete obiektN;

    Produkt *obiektM = new Produkt();

    Produkt *obiektP = new Produkt("Banana");
    cout << obiektP->getNazwa() << endl;

    cout << Produkt::liczbaProduktow << endl;
}

// zadanie 5_5
/*
class B;
class A
{
private:
    int a;

public:
    A() { a = 0; }
    // krok 2 deklaracja funkcji
    void showB(B &x);
    friend class B;
};

class B
{
private:
    int b;

public:
    B() { b = 1; }
    void showA(A &x)
    {
        cout << "A::a=" << x.a << endl;
    }
    friend class A;
};
// krok 3 definicja funkcji
void A::showB(B &x)
{
    cout << "B::b=" << x.b << endl;
};
*/

void ZadKcpp::zadanie5_5()
{
    cout << "To run this uncomment" << endl;
}

// zadanie 5_6

//------------------------------------------------------------------
class Figura
{
public:
    virtual void Narysuj() = 0;
    virtual void Obwod() = 0;
    virtual void Pole() = 0;
};
//------------------------------------------------------------------

//------------------------------------------------------------------
class Trojkat : public Figura
{
private:
    float a;
    float b;
    float c;

public:
    Trojkat(float x, float b, float c)
    {
        this->a = x;
        this->b = b;
        this->c = c;
    }
    void Narysuj()
    {
        cout << "Przepis na narysowanie trojkata" << endl;
    }
    void Obwod()
    {
        cout << "Obwod trojkota wynosi: " << this->a + this->b + this->c << endl;
    }
    void Pole()
    {
        float p = (this->a + this->b + this->c) / 2;
        cout << "Pole trojkota wynosi: " << sqrt(p * (p - this->a) * (p - this->b) * (p - this->c)) << endl;
    }
};

//------------------------------------------------------------------
class Kwadrat : public Figura
{
private:
    int a;

public:
    Kwadrat(int x)
    {
        this->a = x;
    }
    void Narysuj()
    {
        cout << "Przepis na narysowanie kwadrata" << endl;
    }
    void Obwod()
    {
        cout << "Obwod kwadratu wynosi: " << 4 * this->a << endl;
    }
    void Pole()
    {
        cout << "Pole kwadratu wynosi: " << this->a * this->a << endl;
    }
};

//------------------------------------------------------------------
class Prostokat : public Figura
{
private:
    int a;
    int b;

public:
    Prostokat(int x, int b)
    {
        this->a = x;
        this->b = b;
    }

public:
    void Narysuj()
    {
        cout << "Przepis na narysowanie prostokata" << endl;
    }
    void Obwod()
    {
        cout << "Obwod Prostokata wynosi: " << 2 * this->a + 2 * this->b << endl;
    }
    void Pole()
    {
        cout << "Pole Prostokata wynosi: " << this->a * this->b << endl;
    }
};

//------------------------------------------------------------------
class Kolo : public Figura
{
private:
    int r;

public:
    Kolo(int x)
    {
        this->r = x;
    }

public:
    void Narysuj()
    {
        cout << "Przepis na narysowanie kola" << endl;
    }
    void Obwod()
    {
        cout << "Obwod kola wynosi: " << 2 * M_PI * this->r << endl;
    }
    void Pole()
    {
        cout << "Pole kola wynosi: " << M_PI * (this->r * this->r) << endl;
    }
    void Dystans(float x)
    {
        float r = 1;
        while ((M_PI * (r * r)) < x)
        {
            cout << "r = " << r << ", M_PI*(r*r) = " << M_PI * (r * r) << endl;
            r += 0.1;
        }
    }
};

void ZadKcpp::zadanie5_6()
{
    Kwadrat *objKwadrat = new Kwadrat(3);
    objKwadrat->Narysuj();
    objKwadrat->Obwod();
    objKwadrat->Pole();

    Trojkat *objTrojkat = new Trojkat(3, 3, 3);
    objTrojkat->Narysuj();
    objTrojkat->Obwod();
    objTrojkat->Pole();

    Prostokat *objProstokat = new Prostokat(3, 4);
    objProstokat->Narysuj();
    objProstokat->Obwod();
    objProstokat->Pole();

    Kolo *objKolo = new Kolo(5);
    objKolo->Narysuj();
    objKolo->Obwod();
    objKolo->Pole();
    objKolo->Dystans(10);

    //Figura fig;    //ERROR
    //Figura *fig = new Figura();    //ERROR
}