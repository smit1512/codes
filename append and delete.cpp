# include <bits/stdc++.h>
using namespace std;
int main()
{

    string s,t,temp;
    int k,l1,l2;
    cin>>s;
    cin>>t;
    cin>>k;
    l1=s.length();
    l2=t.length();
    int i,x,top=-1,y;
    temp=t[++top];
    if(s==t)
    {
        if(k%2==0 || k>(2*l1))
            cout<<"Yes";
        else
            cout<<"No";

    }
    else if(s[0]!=t[0])
    {
       x=l1+l2;
       if(x==k)
          cout<<"Yes";
       else
          cout<<"No";
    }
    else
    {
        for(i=0;i<l1;i++)
        {
            if(s[i]==t[i])
            {
                y=i;
            }
            else
            {
                break;
            }
        }
        x=(l1-y-1)+(l2-y-1);
    if(x==k)
          cout<<"Yes";
       else
          cout<<"No";
    }
}
