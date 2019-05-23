# include <bits/stdc++.h>
using namespace std;
int main()
{
    int p,q,i,sq,n1,n2;
    int temp1,temp2,x,y;
    static int a=0;
    cin>>p>>q;
    for(i=p;i<=q;i++)
    {
        sq=i*i;
        n1=floor(log10(i)+1);
        n2=floor(log10(sq)+1);
        if(n2%2==0)
        {
            x=(pow(10,n1))+0.5;
            temp1=sq%x;
            int y =(pow(10,(n2-n1)))+0.5;
            temp2=sq/y;
            if((temp1+temp2)==i)
            {
                cout<<i<<" ";
                a=1;
            }
        }
        else
        {
            int y =(pow(10,(n2-n1+1)))+0.5;
            x=(pow(10,n1))+0.5;
            temp1=sq%x;
            temp2=sq/y;
            if((temp1+temp2)==i)
            {
                cout<<i<<" ";
                a=1;
            }
        }
    }
    if(a==0)
        cout<<"INVALID RANGE";
}
