#include <iostream>
using namespace std;

struct product {
	string name;
	int amount;
	double weight;
	float price;
};

int main(){
	struct product product1;
	product1.amount = 2;
	product1.name = "banana";
	product1.weight = 1.2;
	product1.price = 4.50;
	cout << product1.name << "{" << "amount: " << product1.amount << ", weight: "<< product1.weight << ", price: " << product1.price << "}" << endl;

	product product2 = {"apple", 3, 1.8, 5.10};
	cout << product2.name << "{" << "amount: " << product2.amount << ", weight: "<< product2.weight << ", price: " << product2.price << "}" << endl;

	return 0;
}
