#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int i = 2;
        while(i <= n)
        {
            cout<<i<<" ";
            i++;
        }
        cout<<1<<" ";
        cout<<endl;
    }
    return 0;
}
