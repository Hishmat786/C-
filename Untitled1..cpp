
#include <iostream>
using namespace std;
int main()
{
	int A;
	cout<<"write degree of an angle"<<endl;
	cin>>A;
	if(A>=0 && A<90)
	{cout<<"angle A is in first  quandrant";}
	else if(A>=90 && A<180)
	cout<<"angle A is in second quandrant";
	else if(A>=180 && A<270 )
	cout<<"angle A is in thrid quandrant";
	else if(A>=270 && A<360 )
	cout<<"angle A is in fourth quandrant";
	else
	cout<<"invalid input";

    return 0;
	system("pause");   	
}
