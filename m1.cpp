#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int stop;
        string s;
        cin>>s;
        int flag = 0;
        for(int i = s.length()-2;i>=0;i--)
        {
            //cout<<i<<"\n";
            for(int j = s.length()-1;j>=i+1;j--)
            {

                if((int)s[i]<(int)s[j])
                {
               // cout<<j<<"\n";
                 char temp  = s[j];
                 s[j] = s[i];
                 s[i] = temp;
                 stop = i+1;
                 flag = 1;
                 break ;
                }

            }
            if(flag == 1)
                    break;
        }

        if(flag == 1)
        {
            string t = s.substr(stop);
           sort(t.begin(),t.end());
           string p = s.substr(0,stop);
           p = p.append(t);
           cout<<p<<"\n";
        }
        else
            cout<<"no answer"<<"\n";

        t--;
    }
}
