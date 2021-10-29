#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;

	for(int i=1;i<=n;i++)
	{
		for (int j=0;j<n;j++)
		{
			if (j%2==0)
			{
				cout<<i+(n*j)<<" ";
			}
			else
			{
				cout<<(j+1)*n-(i-1)<<" ";
			}
		}
		cout<<endl;
	}
}
