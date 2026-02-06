#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    long long int cost =0;
    for(int i=0;i<n-1;i++)
    {
        if(a[i+1]<a[i])
        {   
            cost+=a[i]-a[i+1];
            a[i+1]=a[i];
        }
    }
    cout<<cost<<endl;
    return 0;
}