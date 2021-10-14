#include <iostream>
using namespace std;
int main()
{
	int n;	
	cin>>n;
	
	if (n<=0)
	cout<<"no output";
		
	else
{
	int i=n;
	while(i>=1)
	{
		int j=0;
		
		while(j<n-i)
		{
			cout<<"  ";
			j++;
		}
		
		int k=1;
		while (k<=i)
		{
			cout<<k<<" ";
			k++;
		}				
		cout<<endl;
		i--;
	}
}
	return 0;
}
