#include<iostream>
#include<string>
using namespace std;
int main()
{
	string char1, char2;
	int n, i=1,iT=0;
	
	cin>>n;
	while(i<=n)
	{
		cin>>char1>>char2;
		i++;
		iT++;
	}
	i=1;
	while(i<iT)
{
		
	if(char1 == char2)
	cout<<"similar";

	else
	cout<<"not similar";
	i++;		
}
	
	
}
