#include<iostream>
using namespace std;
int main()
{
	int s;
	cin>>s;
	int num[s];
	if(s>2)
{
		for(int i=0; i<s; i++)
		cin>>num[i];
			
	int i=0;
	while(i<s)
	{
		cout<<num[i]<<" ";
		i++;
		num[5]=10;
	}
	cout<<endl;	
	cout<<num[0]<<" "<<num[i-1]<<endl;
	int isT=0;
	for(int i=0; i<s; i++)
	{
		if(num[i]%2==0)
		{
		cout<<num[i]<<" ";
		isT++;
		}
	}
		if(isT==0)
		cout<<"none";
	
		cout<<endl;
		int iT=0;
	for(int i=0; i<s; i++)
	{
		if(num[i]%2!=0)
		{
			cout<<num[i]<<" ";
			iT++;}
	}
	 	if(iT==0)
		cout<<"none";
		cout<<endl;
	for(int i=0; i<s; i++)
	{
		if(i%2==0)
		cout<<num[i]<<" ";
	}
	cout<<endl;
	for(int i=0; i<s; i++)
	{
		if(i%2!=0)
		cout<<num[i]<<" ";
	}
}
	
	return 0;	
}
