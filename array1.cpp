#include<iostream>
using namespace std;
int main()
{
	int ser[10]={55, 63, 78, 98, 10, 24, 32, 4, 20, 47};
	int index1,index2;
	cin>>index1;
	cin>>index2;
	
	cout<<ser[0]<<" "<<ser[8]<<" "<<ser[6]<<" "<<ser[2]<<" "<<ser[9]<<endl;
	cout<<ser[index1]<<" "<<ser[index2]<<endl;
	if(ser[index1] % 2==0)
	cout<<"even";
	else
	cout<<"odd";
	cout<<endl;
	if(ser[index1]  > ser[index2])
	cout<<ser[index1];
	else
	cout<<ser[index2];

	return 0;
}
