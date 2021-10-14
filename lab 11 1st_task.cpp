#include<iostream>
using namespace std;
int main()
{
	
	
	cout<<"a) \n\n";
	int arr[2][3]={
					{5,2,11},	
					{245, 22, 0}
				  };
				  
		cout<<arr[0][0]<<"   "<<arr[0][1]<<"  "<<arr[0][2]<<endl;
		cout<<arr[1][0]<<" "<<arr[1][1]<<" "<<arr[1][2]<<endl;
	cout<<"\nb)\n\n";
	
	int n,m;
	cout<<"Enter number of rows and column.\n";
	cin>>n>>m;
	cout<<"Enter values.\n";
	int n_arry[n][m];
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			cin>>n_arry[i][j];
		}
	}	
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			cout<<n_arry[i][j]<<" ";
		}cout<<endl;
	}
	
	cout<<"\nc)\n";	
	cout<<"value at 1st row and 3rd calumn is: "<<n_arry[0][2]<<endl;
	cout<<"\nd)\n";
	n_arry[1][1]=20;
	cout<<"\n\ne)\n";
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if(n_arry[i][j] % 2==0)
			cout<<n_arry[i][j]<<" is a Even...\n";
			else
			cout<<n_arry[i][j]<<" is a Odd...\n";
	    }
	}	
	
	cout<<"\n\nf)\n";
	cout<<"Values at odd columns: \n";
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if(j%2 == 0)
			cout<<n_arry[i][j]<<" ";		
	    }
	}
	
	cout<<"\n\ng)\n";
	int find;
	cout<<"Enter a value to search it is present or not.\n";
	cin>>find;
	bool findd=false;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if(find == n_arry[i][j] )
			    findd =true;		
	    }
	}
	cout<<endl<<findd<<endl;
	cout<<"\n\nh)\n";
	cout<<"Values are greater than (find) value.\n";
	int coun=0;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if(find < n_arry[i][j] )
			{
				cout<<n_arry[i][j]<<" ";
			    coun++;
			}
		}
	}
	cout<<"\ntotal numbers are: "<<coun;
	cout<<"\n\ni)\n";
	cout<<"Values are less than (find) value.\n";
	int count=0;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if(find > n_arry[i][j] )
			   {
			    cout<<n_arry[i][j]<<" ";
			    count++;
			   }
		}
	}
	cout<<"\ntotal numbers are: "<<count;
				  
	cout<<endl;
	
	
	
	system ("pause");
	return 0;	
}
