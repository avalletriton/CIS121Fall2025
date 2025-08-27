#include<iostream>
using namespace std;
int main()
{
	//variables
	float ItemPrice;
	float Discount;
	float DiscountedPrice;
	float DiscountDecimal;

	//input
	cout << "Enter item price: $";
	cin >> ItemPrice;
	cout << "Enter discount: ";
	cin >> Discount;

	//process
	DiscountDecimal = Discount * .01;
	DiscountedPrice = ItemPrice - (DiscountDecimal * ItemPrice);
	cout << "Discount: " << Discount << "% off" << endl;
	cout << "Discounted price: " << DiscountedPrice;
	return 0;
}