#include<iostream>
#include<string>
#include <sstream>
using namespace std;
int main()
{
	int n;
	
		cin>>n;
		
		int j = 0;
		string s;
		while (j <= n){
		
		string a;
		getline(cin,a);
		s = s + "\n"+a;
		j++;
	}
	cout<<s;
	istringstream f(s);
	string a;
	while (getline(f,a)){
		cout<<a<<endl;
		cout<<a.size();
	}
}
