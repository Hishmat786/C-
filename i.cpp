#include <iostream>
using namespace std;
int main()
{
	int e=0,num,factor=0,j=0,i=1;
	cout<<"enter number "<<endl;
	cin>>num;
	while(num!=e)
	{
		while(j>=i)
		{
		
		if(j%i==0)
		factor++;
		i++;
		e++;
		}      
		
	if(factor==2)
	{cout<<j<<",";}
	
	j++;
   } 
	return 0;
	
	
}
