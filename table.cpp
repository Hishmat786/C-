#include <iostream>
using namespace std;
int main()
{
	int i=1,n;
	cout<<"Enter any Number: ";
	cin>>n;
	
	while(i<=10)
	{
		cout<<n<<"*"<<i<<"= "<<n*i<<endl;
		i++;
	}
	cout<<"\nTable of "<<n;
	return 0;
}
