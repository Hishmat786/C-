#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
	int n, i=0;
	string id, sT;
	cin>>n;
	if(n<1)
	cout<<"no out";
	
	
	while(i<=n)
	{
		getline(cin, sT);
		id+=sT;
		i++;
	}
	
	i=0;
	int j=1;
	while(i<id.length())
	{
		cout<<"\nstudent"<<j<<endl;
		cout<<id.substr(0+i,3)<<"-"<<id.substr(3+i,2)<<"-"<<id.substr(5+i, 4)<<endl;
		cout<<"Dept: ";
		
		if(id.substr(0+i,3)== "021")
		cout<<"Computer Science"<<endl;
		else if(id.substr(0+i,3)== "051")
		cout<<"Software Engineering"<<endl;
		else if(id.substr(0+i,3)== "031")
		cout<<"Electrical Engineering"<<endl;
		else if(id.substr(0+i,3)== "163")
		cout<<"Agribusiness"<<endl;
		else if(id.substr(0+i,3)== "013")
		cout<<"Business Administration"<<endl;
		
		cout<<"Year: 20"<<id.substr(3+i,2)<<endl;
		cout<<"ID: "<<id.substr(5+i, 4)<<endl;
		
		i=i+9;
		j++;
	}
	return 0;
}
