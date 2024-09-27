#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	bool p2=true;
	while(n!=1)
	{
		if(n%2!=0)
		{
			p2=false;
		}
		n/=2;
	}
	if(p2)
		cout<<"true";
	else
		cout<<"false";
}
