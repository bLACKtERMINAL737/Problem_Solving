#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int x;
        int mul=1;
        cin>>x;
        for(int j=1;j<=x;j++)
        {
            mul=(mul*j)%10;
        }
        cout<<mul<<endl;
    }
    return 0;
}