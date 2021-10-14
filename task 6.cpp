#include<iostream>
using namespace std;
int main()
{
	int n,cl, i=1;
	cin>>n;

	if(n<=0)
	cout<<"no output";
	
	else
	{
	
	while(i<=n)
	{
		int j=1;
		while(j<=i)
		{
			cout<<j<<" ";
			j++;
		}
		cout<<endl;
		i++;
	}
	
}

	return 0;
}
