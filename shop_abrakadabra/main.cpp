#include "shop.h"

int main()
{
	ofstream onf("cheque.txt");

	PivPau_pivo_na_zakaz first_shop;

	first_shop.buy();
	first_shop.discount();
	first_shop.printCheque(onf);
}