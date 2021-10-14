#include <iostream>
using namespace std;
int main()
{
	int ageSoraj, ageMubashar, ageParkash;
	cout<<"Enter age of Soraj:";
	cin>>ageSoraj;
	cout<<"Enter age of Mubashar:";
	cin>>ageMubashar;
	cout<<"Enter age of Parkash:";
	cin>>ageParkash;
	
	if ((ageSoraj<ageMubashar) && (ageSoraj<ageParkash))	
	cout<<"Soraj is younger";
	
	else if ((ageMubashar<ageSoraj) && (ageMubashar<ageParkash))	
	cout<<"Mubashar is younger";
	
	else if ((ageParkash<ageMubashar) && (ageParkash<ageSoraj))	
	cout<<"Parkash is younger";
		
	return 0;
}
