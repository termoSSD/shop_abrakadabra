#pragma once
#include <iostream>
#include <fstream>

using namespace std;

class shop
{
protected:
	int discounts;
	int choise;
public:
	void buy();
	void discount();
	void printCheque();
};

class PivPau_pivo_na_zakaz : public shop
{
private:
	int beer = 5;
	int wiskey = 10;
	int rom = 11;
public:
	void buy()
	{
		cout << "--- Catalog ---" << endl;
		cout << "1. Beer -- " << beer << "$" << endl << "2. Wiskey -- " << wiskey << "$" << endl << "3. Rom -- " << rom << "$" << endl;
		cout << "Enter what u need to buy: ";
		cin >> choise;
	}

	void discount()
	{
		beer = beer - 2;
	}
	
	void printCheque(ofstream& onf)
	{
		if (choise == 1)
		{
			onf << "--- Cheque ---" << endl;
			onf << "Beer for " << beer << "$";
		}

		if (choise == 2)
		{
			onf << "--- Cheque ---" << endl;
			onf << "Wiskey for " << wiskey << "$";
		}
		if (choise == 3)
		{
			onf << "--- Cheque ---" << endl;
			onf << "Rom for " << rom << "$";
		}
	}
};