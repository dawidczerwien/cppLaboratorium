#include <iostream>
using namespace std;

struct product {
	string name;
	int amount;
	double weight;
	float price;

	// można tworzyć konstruktory tak jak w klasie
	product(){
		amount = 0;
		weight = 0;
		price = 0;
	}
};

int main(){
	struct product product1;
	product1.amount = 2;
	product1.name = "banana";
	product1.weight = 1.2;
	product1.price = 4.50;
	cout << product1.name << "{" << "amount: " << product1.amount << ", weight: "<< product1.weight << ", price: " << product1.price << "}" << endl;

	struct product product2;
	cout << product2.amount << endl;
	return 0;
}
