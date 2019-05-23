# include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,top1,top2,temp;
    int r1,c1;
    int r2,c2;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>r1>>c1;
        string s1[r1];
        for(j=0;j<r1;j++)
            cin>>s1[j];
        cin>>r2>>c2;
        string s2[r2];
        for(j=0;j<r2;j++)
            cin>>s2[j];
        for(i=0;i<r1-r2+1;i++)
        {
            temp=1;
            if (s1[i].find(s2[0])!=-1)
            {
                int l=s1[i].find(s2[0]);
                for(j=i+1;j<i+r2;j++)
                {
                     if (s1[j].find(s2[j-i]) !=l)
                        {
                            temp=0;
                            break;
                        }
                }
                if(temp==1)
                {
                    cout<<"YES";
                }
                else
                    {
                        cout<<"NO";
                        break;
                    }
            }
        }
    }
}
