#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(j>n-i)
				cout<<j-(n-i);
			else
				cout<<" ";
		}
		for(int j=1;j<=n-1;j++)
		{
			if(j<=i-1)
				cout<<i-j;
		}
		cout<<endl;
	}
	for(int i=n-1;i>0;i--)
	{
		for(int j=1;j<n;j++)
			cout<<" ";
		cout<<i<<endl;
	}
}
