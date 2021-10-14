#include<iostream>
using namespace std;
int main()
{
	double num1,num2;
	char op;
	
	cin>>num1;
	cin>>num2;
	cin>>op;
	
	switch (op)
	{
		case '+':
			cout<<"Sum is: "<<num1+num2;
			break;
			
		case '-':
			cout<<"Subtraction is: "<<num1-num2;
			break;
			
		case '*':
			cout<<"Multiplication is: "<<num1*num2;
			break;
			
		case '/':
			if(num2 == 0)
			cout<<"cannot divide by zero";
			else
			cout<<"Division is: "<<num1/num2;
			break;
					
		
	}	
	
	return 0;	
}
