#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    float sum = 0;
    for(int i=0;i<t;i++)
    {
        float a,b,c;
        cin>>a>>b;
        c=a*b;
        sum+=c;
    }
    cout <<fixed << setprecision(3)<< sum << endl;
    return 0;
}