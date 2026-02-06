#include<bits/stdc++.h>
using namespace std;
int main ()
{   
    vector<int>n;
    int x;
    while(true)
    {   
        cin>>x;
        if(x==0)
        {
            break;
        }
        n.push_back(x);
        int sum =0;
        for(int i=0;i<=x;i++)
        {
            sum+=(i*i);
        }
        cout<<sum<<endl;
    }
    return 0;
}