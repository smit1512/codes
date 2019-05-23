# include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a,b,temp;
    cin>>t;
    int i,j;
    int arr[1000];
    for(i=0;i<t;i++)
    {
        cin>>n>>a>>b;
        if(a>b)
        {
            temp=a;
            a=b;
            b=temp;
        }
        for(j=0;j<n;j++)
        {
            arr[j]=j*a+(n-1-j)*b;
        }
        if(a==b)
        {
            cout<<(n-1)*a;
        }
        else
        {
            for(j=n-1;j>=0;j--)
            {
                cout<<arr[j]<<" ";
            }
        }
        cout<<"\n";
    }
}
