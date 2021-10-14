#include <iostream>
using namespace std;
int main()
{
	float num1,num2;
	char op;

	cin>>num1;
	cin>>op;
	cin>>num2;
	
	if (op=='+')
	cout<<num1<<"+"<<num2<<"="<<float(num1+num2);
	else if (op=='-')
	cout<<num1<<"-"<<num2<<"="<<float(num1-num2);
	else if (op=='*')
	cout<<num1<<"*"<<num2<<"="<<float(num1*num2);
	else if (op=='/')
	cout<<num1<<"/"<<num2<<"="<<float(num1/num2);
	
	return 0;

}
