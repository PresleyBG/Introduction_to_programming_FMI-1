#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int x,y;
    cin>>x>>y;
    for(int i=x;i<=y;i++)
    {
        bool p=true;
        for(int j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
            {
                p=false;
                break;
            }
        }
        if(p)
            cout<<i<<" ";
    }
}
