# include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,i,j,cnt=0;
    cin>>n>>k;
    long long int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    i=0,j=1;
    while(j<n)
    {
        if(a[j]-a[i]==k)
            {
                cnt++;
                j++;
            }
        if(a[j]-a[i]>k)
            i++;
        if(a[j]-a[i]<k)
            j++;
    }
    cout<<cnt;
}
