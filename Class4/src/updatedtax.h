#pragma once
#include"tax.h"
class UpdatedTax : public Tax
{
public:
	// Task 1: Make the required function(s) (such as taxCalc) virtual in Tax class
	// Task 2: Add 2 more tax factors (taxRate_factor2, taxRate_factor3 in this class)
	float taxRate_factor2;
	float taxRate_factor3;

	UpdatedTax():Tax()
	{

	}
	UpdatedTax(float trate) :Tax(trate)
	{
		taxRate_factor2 = trate;
		taxRate_factor3 = trate;
	}
	UpdatedTax(float trate1, float trate2, float trate3) :Tax(trate1)
	{
		taxRate_factor2 = trate2;
		taxRate_factor3 = trate3;
	}
	
	// Task 3: Redefine virtual function(s) in child class to incorporate all three tax factors
	virtual float taxCalc(float amount)
	{
		return ((taxRate_factor2+ taxRate_factor2 )*amountAfterTax(amount-(Tax::taxCalc(amount))));
	}

	virtual float amountAfterTax(float amount)
	{
		return (amount - taxCalc(amount));
	}

};
