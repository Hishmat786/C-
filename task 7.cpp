#include <iostream>
using namespace std;
int main()
{
	int n,i;	
	cin>>n;
	
	if(n>0)
{
		
	while (n>=1)
	{
		i=n;
		int j=1;
		
		while(j<=i)
		{
			cout<<j<<" ";			
			j++;			 			
		} 
				
	cout<<endl;
	n--;
	}	
}
	else if(n<=0)
	cout<<"no output";

	return 0;
}

