#include <iostream>
using namespace std;
int main()
{
	int b,p,h,H,w  ;
	cout<<"Enter Base:";
	cin>>b;
	cout<<"Enter Parpendicular:";
	cin>>p;
	cout<<"Enter Hypatinues:";
	cin>>h;
	
	H=h*h;
	w=(b*b) + (p*p);
	
	if(H==w)
	cout<<"It is Right angle Triangle.";
	else
	cout<<"It is not a Right angle Triangle.";
	
	return 0;
}
