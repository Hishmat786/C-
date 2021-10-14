#include<iostream>
using namespace std;
int main()
{
	int r,c,i=1, sum=1;
	cin>>r;
	cin>>c;
	
	if (r<1 || c<1)
	cout<<"no output";
	
	else
{
	
	while(r>=i)
	{
		int j=1;
		
		while(c>=j)
		{
			cout<<sum<<" ";	
			sum++;
			j++;			
		}	
		cout<<endl;		
		i++;
	}
}
	return 0;
}
