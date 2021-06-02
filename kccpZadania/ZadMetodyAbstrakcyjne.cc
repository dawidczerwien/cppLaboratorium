/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.05.15
 * \brief Klasy: Metody abstrakcyjne w C++
 * v0.02
 */

#include <iostream>
#include <math.h>
using namespace std;


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
	Trojkat(float x, float y, float z){
		this->a = x;
		this->b = y;
		this->c = z;
	}
   void Narysuj() {
      cout << "Przepis na narysowanie trojkata" << endl;
   }
   void Obwod(){
	cout << "Obwod trojkota wynosi: "<< this->a+this->b+this->c << endl;
   }
   void Pole(){
	float p = (this->a+this->b+this->c) / 2;
	cout << "Pole trojkota wynosi: "<< sqrt(p*(p-this->a)*(p-this->b)*(p-this->c)) << endl;
   }
};

//------------------------------------------------------------------
class Kwadrat : public Figura
{
 private:
	int a;
 public:
   Kwadrat(int x){
	this->a = x;
   }
   void Narysuj() {
      cout << "Przepis na narysowanie kwadrata" << endl;
   }
   void Obwod(){
	cout << "Obwod kwadratu wynosi: "<< 4*this->a << endl;
   }
   void Pole(){
	cout << "Pole kwadratu wynosi: "<< this->a*this->a << endl;
}
};

//------------------------------------------------------------------
class Prostokat : public Figura
{
 private:
        int a;
	int b;
 public:
   Prostokat(int x, int y){
	this->a = x;
	this->b = y;
   }
 public:
   void Narysuj() {
      cout << "Przepis na narysowanie prostokata" << endl;
   }
   void Obwod(){
        cout << "Obwod Prostokata wynosi: "<< 2*this->a+2*this->b << endl;
}
   void Pole(){
	cout << "Pole Prostokata wynosi: "<< this->a*this->b << endl;
   }
};

//------------------------------------------------------------------
class Kolo : public Figura{
 private:
        int r;
 public:
   Kolo(int x){
        this->r = x;
   }
 public:
   void Narysuj() {
      cout << "Przepis na narysowanie kola" << endl;
   }
   void Obwod(){
        cout << "Obwod kola wynosi: "<< 2*M_PI*this->r << endl;
   }
   void Pole(){
	cout << "Pole kola wynosi: "<< M_PI*(this->r*this->r) << endl;
   }
   void Dystans(float x){
	float r = 1;
	while ((M_PI*(r*r)) < x){
		cout << "r = " << r << ", M_PI*(r*r) = " << M_PI*(r*r) << endl;
		r+=0.1;
	}
   }
};


//------------------------------------------------------------------
int main()
{
   Kwadrat *objKwadrat = new Kwadrat(3);
   objKwadrat->Narysuj();
   objKwadrat->Obwod();
   objKwadrat->Pole();

   Trojkat *objTrojkat = new Trojkat(3,3,3);
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
