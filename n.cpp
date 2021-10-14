#include<iostream>
#include<sstream>
using namespace std;

int main()
{
	    int num0 = 0;
	    int sum = 0;
        string b = "";


       cout<<"Enter three or more number (no dcimals): "<<endl; 
       cin>>num0;

      if ( num0 < 0 )
      num0 = -num0;

      stringstream ss;
          ss << num0; 

          ss >> b;

          for(int i = 0; i < b.length(); ++i)
    {
        cout<<b[i]<<" ";

         }

        cout<<endl;

        

return 0;
}
