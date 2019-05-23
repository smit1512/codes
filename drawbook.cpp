#include <bits/stdc++.h>

using namespace std;
int main() {
    long n,p1,p2,i;
    cin >> n;
    long p;
    cin >> p;
    long a=1;
    if((n%2==1)&&(p==1 || p==n || p==n-1))
        cout<<"0";
    else if(p==1 || p==n)
        cout<<"0";
    else
    {
    for(i=1;i<n;i++)
    {
        if(p<=(n/2))
        {
        if(1+2*i>=p)
         {
            p1=i;
            cout<<p1;
            break;
         }
        }
        else
        {
              if(n%2==0)
                if((n-2*i)<=p)
                {
                    p2=i;
                    cout<<p2;
                    break;
                }
            else
               if(((n-1)-2*i)<=p)
                {
                    p2=i;
                    cout<<p2;
                    break;
                }

        }
    }
    }
    return 0;
}
