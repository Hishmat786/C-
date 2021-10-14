#include <iostream>
using namespace std;
int main()
{
	int score;
	char major;   //no== no previous background
	cout<<"% Marks in high school:";
	cin>>score;
	cout<<"From which background:";
	cin>>major;
	
	if (score >= 55 && major =='M')
	cout<<"\nDepartment is Software engineering\n student is eligable";
	else if (score>=50 && major== 'E')
	cout<<"\nDepartment is Computer science\n Student is eligable";
	else if (score>=45 && (major=='E'|| major=='M'))
	cout<<"\nDepartment is Bussiness\n Student is eligable";
	
	else 
	{
	cout<<"\nStudent is not Eligable\n";
	cout<<"Better luck next time ";
}
	return 0;
}

