#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int t,n,k,sum,temp;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            cin>>temp;
            v.push_back(temp);
        }
        for(int i=0;i<n;i++)
        {
            sum=0;
            for(int j=i;j<n;j++)
            {
                if(sum>=k)
                sum=sum+v[j];
            }

        }
    }
}