#include<iostream>
#include<string>
using namespace std;
int main()
	{
		int n;
		string password;
		cin>>n;
		cin>>password;
		
		int chr=0, lower=0, upper= 0,digit=0, special =0;
				
	for(int i=0; i<=password[i]; i++)
	{
		int s=password.length();
		if(s >= 6)
		chr=1;
		if(password[i]>='A' && password[i]<='Z')
		upper=1;
		if(password[i]>='a' && password[i]<='z')
		lower=1;
		if(password[i]>='0' && password[i]<='9')
		digit=1;	
		if((password[i]>=33 && password[i]<=45) || password[i]== 64 || password[i]==94)
		special=1;			
	}	
	
	int total =0;
    if(upper==0)
    total++;
    if(lower==0)
    total++;
    if(digit==0)
    total++;
    if(special==0)
    total++;

    if(n<6)
    {
        if(6-n>total)
        cout<<6-n;
        else
        cout<<total;
    }
    else if(n>=6)
    cout<<total;
}
	
	
	
	
	

