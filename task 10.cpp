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
            cout<<iT.substr(0+i, 2)<<"-"<<iT.substr(3+i, 2)<<"-"<<iT.substr(6+i, 7)<<":"<<iT.substr(13+i, 2)<<":"<<iT.substr(15+i, 2)<<endl;
            i=i+17;
        } 
    }
    else
        cout<<"no output";
        
        return 0;
        
}
