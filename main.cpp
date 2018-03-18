#include<iostream>
#include "calc.cpp"
using namespace std;
int main()
{
	float a=17,b=23;
	SimpleCalculator objSC;
	//objSC.addNum();
	float addRes=objSC.addNum(a,b);
	cout<<"Addition of 2 numbers = "<<addRes<<endl;
	float addRes1=objSC.addNum(100.1,200.3);
	cout<<addRes1<<endl;

	float subRes=objSC.subNum(a,b);
	cout<<"Subtraction of 2 numbers = "<<subRes<<endl;
	float subRes1=objSC.subNum(100.1,200.3);
	cout<<subRes1<<endl;

	float mulRes=objSC.mulNum(a,b);
	cout<<"Multiplication of 2 numbers = "<<mulRes<<endl;
	float mulRes1=objSC.mulNum(100.1,200.3);
	cout<<mulRes1<<endl;

	float divRes=objSC.divNum(a,b);
	cout<<"Division of 2 numbers = "<<divRes<<endl;
	float divRes1=objSC.divNum(100.1,200.3);
	cout<<divRes1<<endl;
	/*int ch;
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
	}*/

}
