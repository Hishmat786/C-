#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
	int n,i=0;
    string input,iT;
    
    cin>>n;
        
    if(n>0)
    {
        while(i<=n)
        {
            getline(cin, input);
            iT=iT+input;
            i++;
        }
        i=0;
        while(i<iT.size())
        {
        	cout<<iT.substr(0, 4)<<"-"<<iT.substr(4, 7)<<" ";
        	
        	if(iT.substr(0, 3) =="030")
			cout<<" belongs to Mobilink Network."<<endl;
			else if(iT.substr(0, 3) =="031")
			cout<<" belongs to Zong Network."<<endl;
			else if(iT.substr(0, 3) =="032")
			cout<<" belongs to Warid Network."<<endl;
			else if(iT.substr(0, 3) =="033")
			cout<<" belongs to Ufone Network."<<endl;
			else if(iT.substr(0, 3) =="034")
			cout<<" belongs to Telenor Network."<<endl;
        	
            i=i+11;
        } 
    }
    else
        cout<<"no output";
        
        return 0;
        
}
