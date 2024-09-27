#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i==0||i==n-1||j==0||j==n-1)
				cout<<".";
			else
				cout<<" ";
		}
		if(n%2==0)
		{
			for(int j=1;j<n-1;j++)
			{
				if(i==n/2||i==n/2-1)
					cout<<".";
				else
					cout<<" ";
			}
		}
		else
		{
			for(int j=1;j<n-1;j++)
			{
				if(i==n/2)
					cout<<".";
				else
					cout<<" ";
			}
		}
		for(int j=0;j<n;j++)
		{
			if(i==0||i==n-1||j==0||j==n-1)
				cout<<".";
			else
				cout<<" ";
		}
		cout<<endl;
	}
}
