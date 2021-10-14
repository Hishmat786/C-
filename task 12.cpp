#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main()
{
	int n,i=0;
	string num,iT;
	cin>>n;
		
	if (n>0)
	{
		while(i<=n)
		{
			getline(cin, iT);
			num+=iT;
			i++;
		}
		
		i=0;		
		while(i<num.length())
		{
			cout<<num.substr(0+i, 4)<<"-"<<num.substr(4+i, 7)<<" ";
				
			if(num.substr(0+i, 3) =="030")
			cout<<" belongs to Mobilink Network."<<endl;
			else if(num.substr(0+i, 3) =="031")
			cout<<" belongs to Zong Network."<<endl;
			else if(num.substr(0+i, 3) =="032")
			cout<<" belongs to Warid Network."<<endl;
			else if(num.substr(0+i, 3) =="033")
			cout<<" belongs to Ufone Network."<<endl;
			else if(num.substr(0+i, 3) =="034")
			cout<<" belongs to Telenor Network."<<endl;			
			i+=11;					
		} 
		
		}
	
	else
	cout<<"no output";
	
	return 0;

}
