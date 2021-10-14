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
		s = s+a+"\n";
		j++;
	}
	
	
	
	istringstream f(s);
	string a;
	
	while (getline(f,a)){
	if (a.size() > 0){
	
		int index = 0;
		
		while(true){
			++index;
			if(a[index] == ' '){
				break;
			}
		}
		
		int i = 0;
		bool check = true;
		int index1 = index + 1;
		
		while(i< index or index1 < a.size()){
			
			if(a[i] != a[index1]){
				check = false;
				break;
			}
			
			++i;
			++index1;
		}
		
		if(check){
			cout<<"similar"<<endl;
		}
		else{
			cout<<"not similar"<<endl;
		}
	}
}



}
