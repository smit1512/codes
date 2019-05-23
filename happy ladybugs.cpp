# include <bits/stdc++.h>
using namespace std;
int main()
{
    int g;
    int n,i=0,j,k,stop,yes;
    int a[100];
    int top=-1;
    string s;
    char x,y;
    cin>>g;
    while(g>0)
    {
        cin>>n;
        cin>>s;
        yes=1;
        i=0;
        while(i<n)
        {
            if(s=="__")
            {
                break;
            }
            if(s[i]=='_')
            {
                //a[++top]=i;
                x=s[i-1];
                y=s[i+1];
                if(x==y)
                {
                    s[i]=y;
                    s[i+1]='_';
                    //a[top]=i+1;
                }
                else if(i>=2 && s[i-2]!=x)
                {
                    for(j=0;j<n,j!=i-1,j!=i-2;j++)
                    {
                        if(s[j]==x)
                        {
                            s[i]=x;
                            s[j]='_';
                            i=0;
                        }
                    }
                }
                else if(i+2<n && s[i+2]!=y)
                {
                    for(j=0;j<n,j!=i+1,j!=i+2;j++)
                    {
                        if(s[j]==y)
                        {
                            s[i]=y;
                            s[j]='_';
                            i=0;
                        }
                    }
                }
                else if(i==1)
                {
                    for(j=2;j<n;j++)
                    {
                        if(s[j]==x)
                        {
                            s[i]=x;
                            s[j]='_';
                            i=0;
                        }
                    }
                }
            }
            i++;
        }
        cout<<s<<g<<"\n";
         for(k=1;k<n-1;k++)
                {
                    if(s[k]!=s[k-1] && s[k]!=s[k+1])
                    {
                        yes=0;
                    }
                }
                if(yes==1)
                    cout<<"YES"<<"\n";
                else
                    cout<<"NO"<<"\n";
        g--;
    }
}
