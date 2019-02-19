#pragma once
#include<iostream>
class Tax
{
public:
	float taxRate_factor1;
	float taxRate_factor2;
	float taxRate_factor3;



	Tax() :taxRate_factor1(2)
	{
		std::cout << "Default Tax Rate applies" << std::endl;
	}

	Tax(float tr)
	{
		taxRate_factor1 = tr;
	}

	Tax(double tr)
	{
		taxRate_factor2 = tr;
	}

	Tax(int tr)
	{
		taxRate_factor3 = tr/100 ;
	}

	virtual float taxCalc(float amount)
	{
		return taxRate_factor1 * amount;
	}

	virtual float amountAfterTax(float amount)
	{
		return (amount - taxCalc(amount));
	}

};
