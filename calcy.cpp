#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
class arithematic
{
   public:	
	int a,b;
	void add()
	{
		int result=a+b;
		cout<<"Addition of two numbers ="<<result<<endl;
	}
	void sub()
	{
		int result=a-b;
		cout<<"Subtraction of two numbers ="<<result<<endl;
	}
	void mul()
	{
		int result=a*b;
		cout<<"Multiplication of two numbers ="<<result<<endl;
	}
	void div()
	{
		try 
		{
			if(b==0) 
			{
				throw b;
			} else if(b < 0) 
			{
				cout<<"Negative denominator not allowed\n";
				cout<<"Please enter valid input\n";
			}
			else
			{
				float result=a/b;
				cout<<"Division of two numbers ="<<result<<endl;
			}
		}
		catch(int num) 
		{
			cout<<"You cannot enter "<<num<<" in denominator.Divide By Zero Error\n";
			cout<<"Please enter valid input\n";
		}
	}
};			
int main()
{
	int ch;
	arithematic a1;
	cout<<"Basic Arithmetic Operatios \n";
	cout<<"1.Addition \t 2.Subtraction \t 3.Multiplication \t 4.Division \t 5.Exit \n";
	cout<<"Enter your choice:\n";
	cin>>ch;
	cout<<"Enter first value: \n";
	cin>>a1.a;
	cout<<"Enter second value: \n";
	cin>>a1.b;
	switch(ch)
	{
		case 1: a1.add();
			break;

		case 2: a1.sub();
			break;

		case 3: a1.mul();
			break;

		case 4: a1.div();
			break;

		case 5: exit(0);
			break;
	}

}
