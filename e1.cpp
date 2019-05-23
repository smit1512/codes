# include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,temp1,temp2,i,cnt=0;
    int n;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cnt=0;
        cin>>a>>b;
        temp1=sqrt(a);
        temp2=sqrt(b);
        if(temp1*temp1!=a)
            temp1+=1;
        cnt=temp2-temp1+1;
        arr[i]=cnt;
    }
    for(i=0;i<n;i++)
        cout<<arr[i]<<"\n";
}
