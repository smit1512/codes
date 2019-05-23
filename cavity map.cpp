# include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,temp,t1,t2,t3,t4;;
    cin>>n;
    string s[n];
    for(i=0;i<n;i++)
    {
        cin>>s[i];
    }
    for(i=1;i<n-1;i++)
    {
        temp=0;t1=0;t2=0;t3-0;t4=0;
        for(j=1;j<n-1;j++)
        {
             temp=0;t1=0;t2=0;t3-0;t4=0;
            temp=(int)s[i][j];
            t1=(int)s[i][j-1];
            t2=(int)s[i][j+1];
            t3=(int)s[i-1][j];
            t4=(int)s[i+1][j];
            if(temp>t1 && temp>t2 && temp>t3 && temp>t4 )
            {
                s[i][j]='X';
            }
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<s[i]<<"\n";
    }
}
