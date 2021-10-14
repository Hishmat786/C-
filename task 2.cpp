#include <iostream>
using namespace std;
int main()
{
	int rows,cols;
	int i=1;
	
	cin>>rows;
	cin>>cols;	

	if(rows<=0 || cols <=0)
	cout<<"no output";
	
	else
{
		
	while(i<=rows)
	{
		int j=1;
		while(j<=cols)
		{
			cout<<0<<" ";
			j++;
		}
		
		cout<<endl;
		i++;
	}
}

	return 0;	
}
