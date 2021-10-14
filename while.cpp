#include <iostream>
using namespace std;
int main()
{
	int n1,n2,i=1,t;
	cout<<"Start number:";
	cin>>n1;
	cout<<"End number:";
	cin>>n2;
	
	t=n1-n2;
	while (i<=t)
	{
		cout<<i;
		if(i<t)
		cout<<",";
		i++;
			
	}
	cout<<endl;
	system("pause");
	
} 
