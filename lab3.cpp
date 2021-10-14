#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter first number:";
	cin>>a;
	cout<<"Enter second number:";
	cin>>b;
	cout<<"Enter third number:";
	cin>>c;
	
	if (a<b)
	{
		if(a<c && b<c)
		cout<<a<<b<<c;
		else if (a<c && c<b)
		cout<<a<<c<<b;	
	}
	
	else if()
