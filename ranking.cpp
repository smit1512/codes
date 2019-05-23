#include <bits/stdc++.h>

using namespace std;
int main() {
    long n,i,m,j,temp=0;
    cin >> n;
    long a[n],x[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    cin>>m;
    long b[m];
    for(i=0;i<m;i++)
        cin>>b[i];
    for(i=0;i<n;i++)
    {
        if(a[i]!=a[i+1])
            x[temp++]=a[i];
        else if(a[i]==a[i+1])
        {
            continue;
        }
    }
    j=0;
    for(i=0;i<temp,j<m;i++)
    {
       if(b[j]<x[temp-1])
       {
           cout<<temp+1<<endl;
           j++;
           i=0;
           continue;
       }
      else if(b[j]>x[0])
       {
           cout<<"1"<<endl;
           j++;
           i=0;
           continue;
       }
       else if(b[j]>=x[i])
            {
                cout<<i+1<<endl;
                j++;
                i=0;
                continue;
            }
        else if(b[j]<x[i])
        {
            continue;
        }
    }
    return 0;
}
