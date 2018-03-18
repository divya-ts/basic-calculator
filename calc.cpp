#include<iostream>
using namespace std;
class SimpleCalculator
{
   public:	
	float addNum(float num1,float num2)
	{
		return num1+num2;
	}
	float subNum(float num1,float num2)
	{
		return num1-num2;
	}
	float mulNum(float num1,float num2)
	{
		return num1*num2; 
	}
	float divNum(float num1,float num2)
	{
		try 
		{
			int num2;
			if(num2==0) 
			{
				throw num2;
			} else if(num2 < 0) 
			{
				cout<<"Negative denominator not allowed\n";
				cout<<"Please enter valid input\n";
			}
			else
			{
				return num1/num2;
			}
		}
		catch(int num) 
		{
			cout<<"You cannot enter "<<num<<" in denominator.Divide By Zero Error\n";
			cout<<"Please enter valid input\n";
		}
	}
};			

