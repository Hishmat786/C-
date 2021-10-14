#include <iostream>
#include <string>
using namespace std;
int main()
{
	int j =0,k=0;
	string val;
	
	cin>>val;
	
	cout<<val<<endl;
	
	while(val.length()>j)
    {
  	cout<<val[j]<<" ";
  	j++;
	}
	while(val.length()>k)
	{
  	cout<<endl<<val[k];
  	k++;
	}
	
	return 0;
}
