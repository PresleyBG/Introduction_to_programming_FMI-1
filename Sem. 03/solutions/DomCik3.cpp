#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n,ci=0,cn;
    cin>>n;
    int tempn=n;
    while(tempn)
    {
        tempn/=10;
        ci++;
    }
    cn=pow(10,ci/2);
	if(ci%2==0)
		n=n%(cn/10)+(n/(cn*10))*(cn/10);
	else
		n=n%cn+(n/(cn*10))*cn;
	cout<<n+1;
}
