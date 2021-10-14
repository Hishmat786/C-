#include <iostream>
using namespace std;
int main()
{
	int n, rem,pro=1, n1,h=0,num;
	
	cin>>n;		//n=456
	while(n>0)
	{
		rem=n%10;
		pro=pro*rem;
		n1=n-rem;
		n=n1/10;
		h++;
		n/=10;
		cout<<n<<" ";
	}
	
	cout<<"\n\n";
	cout<<"product of num is "<< pro<<endl;
	cout<<"number digit "<<h<<"\n\n";
	return 0;
	
}
