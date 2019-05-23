# include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,rem;
    long long int n,temp,cnt=0;
    cin>>t;
    while(t>0)
    {
        cnt=0;
        cin>>n;
        temp=n;
        while(temp>0)
        {
            rem=temp%10;
            temp=temp/10;
            if(rem==0)
                continue;
            if(n%rem==0)
                cnt++;
        }
        cout<<cnt<<"\n";
        t--;
    }
}
