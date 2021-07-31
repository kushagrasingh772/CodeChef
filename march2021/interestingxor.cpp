#include<bits/stdc++.h>
#define ll long long int
#define dd double

using namespace std;

void solution()
{
    ll C;
    cin>>C;
    ll A= pow(2,floor(log2(C)))-1;
    ll B=A^C;
    cout<< A*B <<endl;
}

int main()
{
    ll t;
    cin>>t;
    while (t--)
    {
        solution();
    }
    return 0;
}
