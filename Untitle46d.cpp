#include <iostream>
using namespace std;
int main()
{
	int n,i=1;
	float sum=0;
	cout<<"Input: ";
	cin>>n;		//n=3
	while(i<=n)
	{
		cout<<"1/"<<i;
		
		if(i<n){cout<<" + ";}
	
		sum+=1/float(i);
		i++;
	}
	
	cout<<endl<<"Sum of Harmonic series is= "<<float(sum);

	
	return 0;	
}

