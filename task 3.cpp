#include<iostream>
using namespace std;
int main()
{
	int r,c,i=1;
	cin>>r;
	cin>>c;
	
	
	if (r==0 || c==0)
	cout<<"no output";
	
	else
{		
	while(i<=r)
	{
		int j=1;
		while(j<=c)
		{
			cout<<j;	
			j++;
		}
		cout<<endl;	
		i++;
	} 		
}

	return 0;
}
