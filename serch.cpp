#include<iostream>
using namespace std;
int main()
{
	int n, find, isT=0, a;
	cin>>n;
	int ser[n];
	
	for(int i=0; i<n; i++)
	{
		cin>>ser[i];
	}
	
	cin>>find;
	
	for(int i=0; i<n; i++)
	{
		if(find== ser[i])
		{
			isT++;
			a=i;
		}
	}
	
		if(isT==1)
		{
			cout<<a<<"\n";
			cout<<"True";
		}
		
		else
		{
			cout<<"-1\n";
			cout<<"False";
		}
		
		
		
	
}
