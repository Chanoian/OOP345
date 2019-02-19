#pragma once
#include"updatedtax.h"
class CustomizedTax : public UpdatedTax
{
public:
	// Task 4: Add 2 regions (region1, region2)
	int region1;
	int region2;
	float region1_rate;
	float region2_rate;
	CustomizedTax() : UpdatedTax()
	{
		region1 = 0;  // 0: Region1 subsidy not applicable, 1: Region1 subsidy applicable
		region2 = 0;  // 0: Region1 subsidy not applicable, 1: Region1 subsidy applicable
		region1_rate = 0.0;  //0% less tax
		region2_rate = 0.5;  // 50 % less tax 

	}
	
	CustomizedTax(int r1, int r2, float r1_rate, float r2_rate,float trate1, float trate2, float trate3) :UpdatedTax(trate1,trate2,trate3)
	{
		region1 = r1;
		region2 = r2;
		region1_rate = r1_rate;
		region2_rate = r2_rate;
		
	}

	// Task 5: Redefine the relevant virtual function in this class to incorporate the tax factors based on regions 
	virtual float taxCalc(float amount)
	{
		//Calculate Tax based on Subsidy of Region 1 or Region 2, both or none

		//return ((taxRate_factor2 + taxRate_factor2)*amountAfterTax(amount - (Tax::taxCalc(amount))));
	}

	virtual float amountAfterTax(float amount)
	{
		//return (amount - taxCalc(amount));
	}
	
};
