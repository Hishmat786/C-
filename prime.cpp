#include <iostream>
using namespace std;
int main()
{
	int i=1,j=2,n,isT=0 ,co=0,p,l,k=0;
	cout<<"Enter any number: ";
	cin>>n;
	
	while(i<=n)
	{
		if(n%i==0)
		isT++;
		i++;
	}
	
	if(isT==2)
	{
		cout<<endl<<n<<" is a Prime number.\n\n";
	}
	else
		cout<<endl<<n<<" is not a Prime number.\n\n";


	cout<<"First "<<n<<" Prime numbers are= ";
	while(co!=n)	//n=7
	{
		int p=1,l=0;
		while(p<=k)
		{
			if (k%p==0)
			l++;
			p++;
		}
	
		if(l==2)
		{
			cout<<k<<",";
			co++;
		}
			k++;
	}

}
