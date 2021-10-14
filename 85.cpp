#include <iostream>
#include <string>
using namespace std;
int main()
{
	string a,b;
	int n, i=1;
	cin>>n;
	
	while(i<=n)
	{
		cin>>a>>b;
		i++;
		if(a==b)
		cout<<"similar";
		else
		cout<<"not similar";
	}
}
