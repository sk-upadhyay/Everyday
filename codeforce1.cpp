#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int pep =0;
        int sol =0;
        unordered_map<int,int>maxp;
        for(int i=0;i<n;i++)
        {
            int uid;
            cin>>uid;
            maxp[uid]++;
            if(maxp[uid]&1)
            {
                pep++;
            }
            else
            {
                pep--;
            }
            sol = max(pep,sol);
        }
        cout<<sol<<endl;
    }

}
