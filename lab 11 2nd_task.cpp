#include<iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
	cout<<"a)\n";
	srand (time(NULL));
	
	int n,m;
	cout<<"Enter rows and columns: ";
	cin>>n>>m;
	int arr[n][m];
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			int randNum = rand() % 10 + 1;
			arr[i][j]=randNum;
			cout<<randNum<<" ";
		}
		cout<<endl;
	}
	cout<<"\nb)\n\n";
	cout<<"enter row and column to print. \n";
	int n1,m1;
	
	cin>>n1>>m1;
	if(n1<0&&m1>=0)
	{
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if(j==m1)
			cout<<arr[i][j]<<" ";
		
		
		}
		cout<<endl;
	}
	}
	else if(n1>=0 && m1<0)
	{
		for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if(i==n1)
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}	
	}
	else if (n1>=0 && m1>=0)
	{
		for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			cout<<arr[n1][m1]<<" ";
			break;
		}
		cout<<endl;
		break;
	}
	}
	
cout<<"\nc)\n";
	int sum=0,add=0;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if (i==j)
			sum+=arr[i][j];
		}
	}

	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
		   if(i== n-j-1)
		   add+=arr[i][j];
		}
	}
	
	int diff=sum-add;
	cout<<"diagonal difference: "<<diff<<endl;



cout<<"\nd)\n\n";

	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if (i==0 || j==0 || i==n-1 || j==m-1)
			cout<<arr[i][j]<<" ";
			else
			cout<<"  ";
		}
		cout<<endl;
	}
	
cout<<"\ne)\n\n";
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if (i==0 || j==0 || i==n-1 || j==m-1)
			cout<<" ";
			else
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	
	
	system("pause");
	return 0;
}
