# include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    long long int n,m,s,temp;
    cin>>t;
    for(i=0;i<t;i++)
    {
        temp=0;
        cin>>n>>m>>s;
        if(n-s>m)
        {
            temp=s+m-1;
            temp=temp%n;
            if(temp==0)
            temp=s;
            cout<<temp<<"\n";
        }
        else
        {
            temp=m-(n-s+1);
            temp=temp%n;
            if(temp==0)
            temp=s;
            cout<<temp<<"\n";
        }
    }
}
