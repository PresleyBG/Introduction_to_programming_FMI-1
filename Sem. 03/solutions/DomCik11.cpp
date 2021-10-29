#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;

	for(int i=1;i<=n;i++)
	{
		if (i%2!=0)
		{
			for(int j=1+((i-1)*n);j<=i*n;j++)
			{
				cout<<j<<" ";
			}
		}
		else
		{
			for(int j=i*n;j>(i-1)*n;j--)
			{
				cout<<j<<" ";
			}
		}
		cout<<endl;
	}
}
