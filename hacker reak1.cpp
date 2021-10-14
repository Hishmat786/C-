#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	int i=1, sum=1;
	cin>>s;
	
	if( s[0] >= 65 && s[0] <= 91 )
	cout<<"no output";
		
	else
	{
	while (i<= s.length())
	{
		s[i];
			
		if( s[i] >= 65 && s[i] <= 91 )
		sum++;
		i++;
	}
	cout<<sum;
}
	
		
	return 0;	
	
}
