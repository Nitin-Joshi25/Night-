#include<iostream>
using namespace std;
int main()
{
	int i,j;
	int  a[2][2],b[2][2];
	cout<<"Enter the value of matrix";
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cin>>a[i][j];
		}
		
	}
	
	cout<<"The matrix is =";
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<a[i][j]<<" ";
		}
		
		cout<<endl;
	}
	
	cout<<"Enter the value of matrix";
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cin>>b[i][j];
		}
	}
	
	cout<<"The matrix is =\n";
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<b[i][j]<<" ";
		}
	 cout<<endl;	
	}
	return 0;
	}