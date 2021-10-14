#include <iostream>
using namespace std;
int main()
{
	float num1,num2,sum,sub,mul,div;
	char op;
	cout<<"Enter first number:";
	cin>>num1;
	cout<<"Enter any opreation:";
	cin>>op;
	cout<<"Enter second number: ";
	cin>>num2;
	
	if (op == '+')
	cout<<"="<<num1+num2;
	else if (op == '-')
	cout<<"="<<num1-num2;
	else if (op == '*')
	cout<<"="<<num1*num2;
	else if (op == '/')
	cout<<"="<<num1/num2;
	
	return 0;
	
}


