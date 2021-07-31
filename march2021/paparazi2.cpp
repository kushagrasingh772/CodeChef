#include<bits/stdc++.h>
#define ll long long int
#define dd double
#define sec second
#define fir first
using namespace std;


int orient(pair<int,int>p,pair<int,int>q,pair<int,int>r)
{
    int val=(q.sec-p.sec)*(r.fir-q.fir)-(q.fir-p.fir)*(r.sec-q.sec);
    if (val==0)
    {
        return 0;
    }
    if(val>1)
    {
        return 1;
    }
    return 2;
}

pair<int,int> secondTop(stack<pair<int,int>> &s){
    pair<int,int> p =s.top();
    s.pop();
    pair<int,int>r =s.top();
    s.push(p);
    return r;
}

int max_val(int a, int b)
{
    if(a>b)
    {
        return a;
    }
    return b;
}

int absl(int a, int b)
{
    if(a>b)
    {
        return a-b;
    }
    return b-a;
}

int32_t main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<pair<int ,int>> vec(n);
        for (int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            vec[i]={i+1,temp};
        }
        stack<pair<int,int>> st;
        st.push(vec[0]);
        st.push(vec[1]);

        for (int i = 2; i < n; i++)
        {
            if(st.size()<2)
            {
                st.push(vec[i]);
            }
            else
            {
                if (orient(secondTop(st),st.top(),vec[i])==1){
                    st.push(vec[i]);
                }
                else
                {
                    while(st.size()>=2 && orient(secondTop(st),st.top(),vec[i])!=1){
                    st.pop();
                }
                st.push(vec[i]);  
            }
        }
        
    }

int ans=1;
        while (st.size()>=2)
        {
            pair<int,int>pt=st.top();
            st.pop();
            pair<int,int>qt=st.top();
            ans=max_val(ans,absl(pt.fir,qt.fir));
        }
        cout<<ans<<endl;}
}

